#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * add_nodeint -  function that adds a new node
 * at the beginning of a listint_t list
 * @head: pointer
 * @n: 
 * Return: addresss of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL);
	 return (NULL);
	
	new->n = n;
	new->next = *head;
	
	*head = new;

	return (new);
}
