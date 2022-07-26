#include "main.h"

/**
 * main - entry point
 * @argv[]: array of pointer
 * @argc: calculates number of arguments
 *
 * Return: 0
 */

int main (int argc, char *argv[])
{
	int name;

	if (argv > 1)
	{
		for (name = 1; name < argv; name++)
			_putchar("%s", name);
		else
			_putchar('\n');
		return (0);
	}
}
