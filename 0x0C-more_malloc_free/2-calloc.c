#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  a function that allocates
 * memory for an array, using malloc.
 * @nmemb: elements
 * @size: byte size
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (mem);
}
