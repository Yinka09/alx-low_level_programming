#include "lists.h"

/**
 *list_len - finds the number of elements in a linked list
 *@h: pointer to the list
 *
 *Return: the number of elements
 */


size_t list_len(const list_t *h)
{
	size_t count = 0;

	const list_t *move = NULL;

	move = h;

	while (move != NULL)
	{
		count++;
		move = move->next;
	}
	return (count);
}




