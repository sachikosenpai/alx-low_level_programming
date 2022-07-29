#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to be allocated to
 * Return: 98  on termination
 */

void *malloc_checked(unsigned int b)
{
	void *memry = malloc(b);

	if (memry == NULL)
		exit(98);

	return (memry);
}
