#include <stdio.h>

/**
 * main - prints numbers in base 16 lowercase
 * Return: 0 Always
 */
int main(void)
{
	int num;
	char ar;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (ar = 'a'; ar <= 'f'; ar++)
		putchar(ar);

	putchar('\n');

	return (0);
}
