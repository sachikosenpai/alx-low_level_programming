#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - a function that
 * returns the nth node of a listint_t linked list.
 * @head: pointer to the list
 * @index: is the index of the node, starting at 0
 * Return: NULL if node doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t pnode = head;

	int count = 0;

	while (pnode != NULL)
	{
		if (count == index)
			return(pnode->n);
		count++;
		pnode = pnode->next;
	}
	assert(0);
}

