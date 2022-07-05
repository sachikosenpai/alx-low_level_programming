#include"main.h"
#include<unistd.h>

/**
 * main - to print putchar and a new line
 *
 * Return: - Always(0)
 */

int main(void)
{
int _putchar(char c)
{
	return (write(1, &c, 1));

}
