#include <stdio.h>

/**
 * main - prints alpha in lower and upper cases
 * Return: 0 Always
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);

	putchar('\n');

	return (0);
}
