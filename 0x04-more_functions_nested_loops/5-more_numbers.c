#include "main.h"

/**
 * void more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Always (0)
 */

void more_numbers(void)
{
	int i = j = 0;

	while (i < 10)
	{
		while ( j <= 14)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			++j;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
