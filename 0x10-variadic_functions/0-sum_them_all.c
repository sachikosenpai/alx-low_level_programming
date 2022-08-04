#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns sum of parameters
 * @n unsigned constant
 * @n: parameters
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list ap;
	int i;
	int sum;

	va_start(ap, n);

	sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
