#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argv: array of pointer
 * @argc: calculates number of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
