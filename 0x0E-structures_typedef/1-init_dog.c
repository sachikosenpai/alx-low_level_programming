#include "dog.h"
#include <stdlib.h>

/**
 * struct dog - struct function
 * init_dog - initialized variable
 * @d: user input
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*
	 * init_dog - initialized variable
	 * Return: dog on success
	 */

	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}