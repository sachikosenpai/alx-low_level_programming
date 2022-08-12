#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to the linked list
 * Return: NULL if str is empty
 *
 */

size_t print_list(const list_t *h)
{
	if (h == NULL)
	{
		return (0);
		printf("[%u] %s\n", h->leng, h->str);

	}

	if (h->next != NULL)
		return (print_list(h->next) + 1);
	return (1);
}
