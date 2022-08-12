#include "lists.h"
#include <stddef.h>

/**
 * list_len - a function that returns the number of
 * elements in a linked list_t list.
 * @h: pointer to the linked list
 * Return: the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t element = 0;
	const list_t *head;
	
	head = h;
	while (head != NULL)
	{
		element++;
		h = h->next;
	}


	return (element);

}
