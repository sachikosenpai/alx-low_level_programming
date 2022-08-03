#include "3-calc.h"
#include <stdio.h>

/**
 * op_add -  operator to add variables
 * @a: num 1
 * @b: num 2
 * Return: value
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract
 * @a: integer 1
 * @b: integer 2
 * Return: value
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply
 * @a: integer 1
 * @b: integer 2
 * Return: value
 */

 int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to divide
 * @a: integer 1
 * @b: integer 2
 * Return: Value
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function to get modulous
 * @a: integer 1
 * @b: integer 2
 * Return: Value
 */

int op_mod(int a, int b)
{
	return (a % b);
}
