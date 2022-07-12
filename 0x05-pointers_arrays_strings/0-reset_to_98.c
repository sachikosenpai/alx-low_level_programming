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

	g = 402;

	printf("Value of 'g': %d\n", g);
	printf("Address of 'g': %p\n", &g);
	reset_to_98(&g);
	printf("Value of 'n': %p\n", n);
	
}
