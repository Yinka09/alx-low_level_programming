#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 *
 * @h:pointer to the list
 *
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	const listint_t *move = NULL;

	move = h;

	while (move != NULL)
	{
		printf("%d\n", move->n);
		count += 1;
		move = move->next;
	}
	return (count);
}
