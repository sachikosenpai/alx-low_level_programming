#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list, and
 * returns the head node’s data (n).
 * @head - pointer to the list
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	int key;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	key = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (key);
}
