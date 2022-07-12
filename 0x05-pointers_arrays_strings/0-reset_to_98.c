#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - a function that takes a pointer to an int as parameter and
 * updates the value it points to to 98
 * @n: character
 * @p: pointer
 *
 * Return: Always (0) success
 */

void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 402;
	p = &n;

	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %d\n", &n);
	printf("Value of 'p': %d\n", p);
	*p = 98;
	printf("Value of 'p': %d\p", p);
	return (0);
}
