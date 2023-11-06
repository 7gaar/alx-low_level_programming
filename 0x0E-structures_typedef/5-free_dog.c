#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees dogs
 * @d: dog to free
 *
 * Ahmed Ali
 * NOV 6th 23
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d);
		free(d->owner);
	}
}
