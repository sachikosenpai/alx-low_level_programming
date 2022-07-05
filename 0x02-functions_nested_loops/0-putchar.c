#include<unistd>

/**
 * main - to print putchar and a new line
 *
 * Return: - Always(0)
 */

int _putchar(char c)
{
	prinf("_putchar\n");
	return(write (1, &c, 1));

}
