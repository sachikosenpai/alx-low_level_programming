#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: number of times
 *
 * Return \n is n is less than 0 or equal to
 */

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');

		if (len == n - 1)
			continue;

		_putchar('\n');
		}
	}

	_putchar('\n');
}
