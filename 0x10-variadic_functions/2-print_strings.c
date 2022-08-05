#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  function that prints strings
 * @separator: string to be printed in between strings
 * @n:  number of strings passed to the function
 * Return: NULL if separator is null otherwise nil
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *sep;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sep = (va_arg(ap, char*));
		if (sep != NULL)
			printf("%s", sep);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

