#ifndef dog_h
#define dog_h
#include <stdlib.h>

/**
 * struct dog - to name elements of the dog
 * @name: name of dog
 * @owner: owner of the dog
 * @age: age of the dog
 * my_dog: function of the dog to be used
 *
 * Return: 0 on success
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

struct dog *my_dog(char *name, float age, char *owner)
{

	struct dog *dog;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
#endif
