#include "lists.h"
#include <stddef.h>

/**
 * free_listint2 -  a function that
 * frees a listint_t list.
 * head - pointer to the function
 */

void free_listint2(listint_t **head)
{
	listint_t *cnode

	if (head == NULL)
		return (NULL);

	while (*head)
	{
		cnode = (*head)->next;
		free = (*head);
		*head = cnode;
	}
	head = NULL;
}
