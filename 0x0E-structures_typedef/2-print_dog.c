#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function to print struct dog
 * @d: user input
 */

void print_dog(struct dog *d)
{
	char *name;
	char *owner;
	float age;

	d->name = name;
	d->owner = owner;
	d->age = age;

	if (name == NULL || owner == NULL || age == '\0')
		printf("nil");
	
	if (d == NULL)
		return;
}
