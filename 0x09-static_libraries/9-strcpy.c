#include "main.h"

/**
 * _strcpy - a function that copies a string
 * @dest: string
 * @src: string
 * @n: bytes
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
