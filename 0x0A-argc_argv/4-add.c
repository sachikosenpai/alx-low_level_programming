#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: counts arguments
 * @argv: value of the argument
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int a, b, add;

	while (argc-- > 1)
	{
		for (a = 0; argv[argc][a]; a++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Errot\n");
				return (1);
			}
		}
		b = atoi(argv[argc]);
		add += b;
	}
	printf("%d\n", add);
	return (0);
}
