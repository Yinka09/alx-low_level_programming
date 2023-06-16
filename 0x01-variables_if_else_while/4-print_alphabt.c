#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * except q and e, followed by a new line
 * Return: 0 Always
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az != 'e' && az != 'q')
		{
			putchar(az);
		}
	}

	putchar('\n')

	return (0);
}
