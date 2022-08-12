#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @leng: length of the string
 * @next: points to the next node
 *
 * Description: singly listed note for this repository
 * singly_linked_lists
 */

typedef struct list_s
{
	char *str;
	unsigned int leng;
	struct list_s *next;
} list_t;


size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /*LISTS_H*/
