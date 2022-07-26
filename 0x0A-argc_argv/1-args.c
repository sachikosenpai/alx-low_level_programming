#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: counts the arguement pased through it
 * @argv: a string that comes after calling function
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
