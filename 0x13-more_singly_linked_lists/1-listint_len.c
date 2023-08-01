#include "lists.h"

/**
 * listint_len - finds the number of elements in a linked list
 *@h: pointer to the head of the list
 *
 *Return: the number of elements
 */


size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	const listint_t *move = NULL;

	move = h;

	while (move != NULL)
	{
		count++;
		move = move->next;
	}
	return (count);
}
