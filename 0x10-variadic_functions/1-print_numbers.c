#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function to print numbers 
 * @separator: string to be printed among numbers
 * @n: number of integers passed to the function
 * Return: NULL if separator doesnt print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (separator != NULL && i < n -1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
