#include "lists.h"
#include <stddef.h>

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer that points to list
 * @index: is the index of the node that
 * should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *next;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	next = *head;

	if (index == 0)
	{
		tmp = next->next;
		free(next);
		*head = tmp;
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (next == NULL)
			return (-1);
		tmp = next;
		next = next->next;
	}
	tmp->next = next->next;
	free(next);
	if (index == 0)
		head = &tmp;
	return (1);
}
