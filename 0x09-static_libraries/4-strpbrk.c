#include "main.h"
#include <stdio.h>

/**
 * _strpbk - searches a string for any of a set of bytes
 * @s: place to return bytes from
 * @accept: the bytes to include
 *
 * Return: return a pointer in s to accept
 */

char *_strpbk(char *s, char *accept)
{
	int *z = accept;

	while (*s)
	{
		while (*accept)
		{
			if (accept == *s)
				return (s);
			accept++;
		}
		accept = z;
		s++;
	}
	return (NULL);
}
