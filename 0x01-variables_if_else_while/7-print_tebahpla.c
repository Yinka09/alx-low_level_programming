#include <stdio.h>

/**
 * main - prints the alphabets in reverse
 * Return: 0 Always
 */
int main(void)
{
	char ar;

	for (ar = 'z'; ar >= 'a'; ar--)
		putchar(ar);

	putchar('\n');

	return (0);
}
