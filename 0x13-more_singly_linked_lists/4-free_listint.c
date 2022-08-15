#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * free_listint - a function that frees
 * a listint_t list.
 * @head: pointer to the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *pnode;


	while (head != NULL)
	{
		pnode = head->next;
		free(head);
		head = pnode;
	}
}
