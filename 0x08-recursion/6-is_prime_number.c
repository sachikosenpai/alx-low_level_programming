#include "main.h"

int is_it_divisible(int n, int i);
int is_prime_number(int n);

/**
 * is_it_divisible - to chek if a number is prime number
 * @n: number to be checked
 * @i: the divisor
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_it_divisible(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i == n / 2)
	{
		return (1);
	}

		return (is_it_divisible(n, i + 1));
}

/**
 * is_prime_number - check if the inputed nuber is prime
 * @n: number to be checked
 *
 * Return: 1 if input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return(1);

	return (is_it_divisible(n, i));
}
