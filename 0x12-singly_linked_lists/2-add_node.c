#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node - a function that adds a new
 * node at the beginning of a list_t list.
 * @head: head list
 * @str: string to be duplicated
 * Return: head value
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = duplicate;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
