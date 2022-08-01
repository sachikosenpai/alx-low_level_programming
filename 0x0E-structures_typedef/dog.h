#ifndef dog_h
#define dog_h
#include <stdlib.h>

/**
 * struct dog - to name elements of the dog
 * @name: name of dog
 * @owner: owner of the dog
 * @age: age of the dog
 * my_dog - function of the dog to be used
 *
 * Return: 0 on success
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
