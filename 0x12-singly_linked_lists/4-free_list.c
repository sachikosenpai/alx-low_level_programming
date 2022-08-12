#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - function that frees a list
 * @list_t - signle linked list
 * @head: pointer to the list
 */

void free_list(list_t *head)
{
	list_t *currentnode;

	while (head != NULL)
	{
		currentnode = head;
		head = head->next;
		free(currentnode);
	}
}
