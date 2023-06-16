#include <stdio.h>

/**
 * main - prints single digits i base 10 from 0
 * Return: 0 Always
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
