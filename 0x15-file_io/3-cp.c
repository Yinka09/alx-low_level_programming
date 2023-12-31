#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_buf(char *file);
void file_closed(int fd);

/**
 * make_buf - Allocates 1024 bytes for a buf.
 * @file: The name of the file buf is storing chars for.
 *
 * Return: A pointer to the newly-allocated buf.
 */
char *make_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * file_closed - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void file_closed(int fd)
{
	int fc;

	fc = close(fd);

	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, input, output;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = make_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	input = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || input == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		output = write(to, buf, input);
		if (to == -1 || output == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		input = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (input > 0);

	free(buf);
	file_closed(from);
	file_closed(to);

	return (0);
}
