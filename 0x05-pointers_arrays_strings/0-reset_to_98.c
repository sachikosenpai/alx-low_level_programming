#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - a function that takes a pointer to an int as parameter and
 * updates the value it points to to 98
 * @n: character
 *
 * Return: Always (0) success
 */

void reset_to_98(int *n)
{
	int g;
	int *n;

	g = 402;
	n = &g;

	printf("Value of 'g': %d\n", g);
	printf("Address of 'g': %p\n", &g);
	printf("Value of 'n': %p\n", n);
	*n = 98;
	printf("Value of 'n': %d\n", n);
	
}
