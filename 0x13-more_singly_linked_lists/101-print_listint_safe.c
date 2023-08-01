#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *node, *link;
	size_t track = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	node = head->next;
	link = (head->next)->next;

	while (link)
	{
		if (node == link)
		{
			node = head;
			while (node != link)
			{
				track++;
				node = node->next;
				link = link->next;
			}

			node = node->next;
			while (node != link)
			{
				track++;
				node = node->next;
			}

			return (track);
		}

		node = node->next;
		link = (link->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t track, index = 0;

	track = looped_listint_len(head);

	if (track == 0)
	{
		for (; head != NULL; track++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < track; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (track);
}
