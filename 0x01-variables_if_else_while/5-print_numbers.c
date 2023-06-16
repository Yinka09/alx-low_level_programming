#include <stdio.h>

/**
 * main - prints all single digits of base
 * 10 from 0 to 9
 * Return: 0 Always
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
