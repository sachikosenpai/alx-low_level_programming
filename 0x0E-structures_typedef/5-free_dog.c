#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog structure
 *
 * @d: pointer to the struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

		free(d->owner);
		free(d->name);
		free(d);
}
