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
	listint_t *pnode;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	pnode = head;

	for (i = 0; i < index; i++)
	{
		if (pnode == NULL)
			return (NULL);
		pnode = pnode->next;
	}
	return (pnode);
}

