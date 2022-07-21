#include "main.h"

int _strlen_recursion(char *S);
int check_palindrome(char *s, int n, int i);
int is_palindrome(char *s);

/**
 * _strlen_recursion - return the length of a string
 * @s: string
 *
 * Return: string length
 */

int _strlen_find(char *s)
{
	if (s[0] == '\0')
		return (0);
	
	if (s[1] == '\0')

		return (1);

	else
	{
		return (_strlen_recursion((&s[1]) + 1);
	}
}

/**
 * check_palindrome - to check if the string is a palindrome
 * @s: string to check
 * @n: size of string
 * @i: counter string
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_palindrome(char *s, int n, int i)
{
	if (s[i] == s[n / 2])
		return (1);

	if (s[i] == s[n - i - 1])
		return (check_palindrome(s, n, i + 1));

	return (0);
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string to be checked
 *
 * Return: 1if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int n = _strlen_recursion(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, n, i));
}
