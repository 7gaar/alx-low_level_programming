#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to structure
 * @name: pointer to the name of the dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Ahmed Ali
 * NOV 6th 23
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
