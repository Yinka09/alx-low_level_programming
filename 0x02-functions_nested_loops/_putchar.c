#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @C: The character to print
 *
 * Return: 1 Always
 * On error, -1 is returned, and errno is ser appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
