#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that returns the
 * number of elements in a linked listint_t list.
 * @h: pointer to the linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;
	
	nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
