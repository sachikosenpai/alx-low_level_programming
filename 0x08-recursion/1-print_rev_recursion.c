#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @S: string to be printed
 *
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	if (s[1] != '\0')
		
	{
		_print_rev_recursion(&S[1]);
	_putchar(s[0]);
	}

	else
	{
		_putchar(s[0]);
	}
}

