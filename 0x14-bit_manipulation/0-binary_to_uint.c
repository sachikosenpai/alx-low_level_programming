#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int.
 * @b: pointer to the string
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
