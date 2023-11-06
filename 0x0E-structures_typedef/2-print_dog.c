#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints structdog
 * @d: pointer to structure
 *
 * Ahmed Ali
 * NOV 6ht 23
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
