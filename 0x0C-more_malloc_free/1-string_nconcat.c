#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum bytes of s1 to concaenate to 2
 * Return: NULL if function fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int leng = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		leng++;

	concat = malloc(sizeof(char) * (leng + 1));

	if (concat == NULL)
		return (NULL);

	leng = 0;

	for (i = 0; s1[i]; i++)
		concat[leng++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[leng++] = s2[i];

	concat[leng] = '\0';

	return (concat);
}

