#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints all
 * @format: format
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j, x = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && x)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), x = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), x = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), x = 1;
				break;
			case 's':
				str = va_arg(ap, char *), x = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(ap);
}
