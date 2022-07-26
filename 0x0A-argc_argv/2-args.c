#include "main.h"
#include <stdio.h>

/**
 * main - prints the program name
 * @argc: counts arguement
 * @argv: value of the argument
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
