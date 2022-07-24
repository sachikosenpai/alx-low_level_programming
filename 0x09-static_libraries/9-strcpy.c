#include "main.h"
#include <string.h>i
/**
 * _strcpy - a function that copies a string
 * @dest: string
 * @src: string
 * @n: bytes
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y;

	while (src[x] != '\0')
	{
		x++
	}

	for (y = 0; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';

	return (dest);
}
