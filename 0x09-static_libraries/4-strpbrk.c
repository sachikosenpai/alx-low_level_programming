#include "main.h"
#include <stddef.h>

/**
 * _strpbk - searches a string for any of a set of bytes
 * @s: place to return bytes from
 * @accept: the bytes to include
 *
 * Return: return a pointer in s to accept
 */

char *_strpbk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}