#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: charater
 *
 * Return: n if 0 is less print \n
 */

void print_line(int n)
{
	int i;

	if (n >= 0)
		for (i = 0; i < n ; i++)
			_putchar('_');
			_putchar('\n');
}
