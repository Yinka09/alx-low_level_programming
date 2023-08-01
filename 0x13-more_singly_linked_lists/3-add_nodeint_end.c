#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@n: integer to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (new);
}
