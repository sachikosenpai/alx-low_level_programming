#include "main.h"
#include <stddef.h>

/**
 * print_binary - function to print binary numbers
 * @n: number to be printed
 */

void print_binary(unsigned long int n)
{
	unsigned i;

	for (i = 1 << 31; i > 0; i = i / 2)
		(n & i) ? _putchar('1') : _putchar('0');
}
