#include<stdio.h>

/**
 * main - to print putchar and a new line
 *
 * Return: - Always(0)
 */

int _putchar(char c)
{
	return(write (1, &c, 1));

}
