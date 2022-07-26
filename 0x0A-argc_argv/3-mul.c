#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of the program
 * @argc: counts the arguments
 * @argv: value of the arguments
 * Return: 0 on success and 1 if input is less than 1
 */

int main(int argc, char *argv)
{
	int a, b, multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	multi = a * b;

	printf("%d\n", multi);
	return (0);
}
