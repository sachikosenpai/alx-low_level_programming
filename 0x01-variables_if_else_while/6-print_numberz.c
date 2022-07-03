#include <stdio.h>

/**
 * main - prints all single digit number of base 10 using put char
 *
 * Return: Always(0)
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
{
	putchar(i);
	i++;
}
	putchar('\n');

	return (0);

}
