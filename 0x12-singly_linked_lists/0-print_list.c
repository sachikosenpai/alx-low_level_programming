#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to the linked list
 * Return: number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->leng, h->str);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
