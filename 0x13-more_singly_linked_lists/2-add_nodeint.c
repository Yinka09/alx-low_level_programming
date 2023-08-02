#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@n: integer to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));

	if (!current)
		return (NULL);

	current->n = n;
	current->next = *head;

	*head = current;

	return (current);
}
