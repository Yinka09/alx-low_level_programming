#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	char *str2;
	list_t *new, *last;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	str2 = strdup(str);

	if (str2 == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i] != '\0';)
		i++;

	new->str = str2;
	new->len = i;
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
