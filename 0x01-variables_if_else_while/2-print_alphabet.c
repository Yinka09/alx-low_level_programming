#include <stdio.h>

/**
 * main - Prints all letters in lower case
 * Return: 0 Always
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
