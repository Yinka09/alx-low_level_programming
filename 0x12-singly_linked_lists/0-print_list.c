#include "lists.h"

/**
 * print_list - prints all the elements of a list
 *
 * @h:pointer to the list
 *
 * Return: the number of nodes
 */


size_t print_list(const list_t *h)
{
	size_t count = 0;

	const list_t *move = h;

	while (move != NULL)
	{
		if (move->str != NULL)
			printf("[%d] %s\n", move->len, move->str);
		else
			printf("[0] (nil)\n");

		count += 1;
		move = move->next;
	}
	return (count);
}
