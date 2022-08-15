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

	if (*head == key)
		return (0);

	temp = *head;
	key = (*head)->n;
	*head = (*head)->next;
	
	free(temp);


	return (key);
}
