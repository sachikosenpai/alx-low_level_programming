#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: charater
 *
 * Return: n if 0 is less print \n
 */

void print_line(int n)
{
	int len;

	if (n >= 0)
	{
		for (len = 0; len < n ; len++)
			_putchar('_');
	}

			_putchar('\n');
}
