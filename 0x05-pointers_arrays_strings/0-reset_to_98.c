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

	*n = 98;

	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	
}
