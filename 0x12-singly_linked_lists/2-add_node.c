#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *str2;
	list_t *current;

	current = malloc(sizeof(list_t));

	if (current == NULL)
		return (NULL);

	str2 = strdup(str);

	if (str2 == NULL)
	{
		free(current);
		return (NULL);
	}

	for (len = 0; str[len] != '\0';)
	{
		len++;

		current->str = str2;
		current->len = len;
		current->next = *head;
	}

	*head = current;

	return (current);
}
