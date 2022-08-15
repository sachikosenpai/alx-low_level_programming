#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - function that prints all the
 * elements of a listint_t list.
 * @h: pointer to the single list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
	{
		if (h == NULL)
			printf("%d\n", 0);
		else
			printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
