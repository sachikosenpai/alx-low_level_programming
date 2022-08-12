#include "lists.h"
#include <stdio.h>


void __attribute__((constructor)) tortoise_hare(void);

/**
 * @tortoise_hare - prints a string before main function
 *
 */

void tortoise_hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
