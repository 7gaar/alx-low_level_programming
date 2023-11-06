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
	if (d  != 0)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->owner != 0)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: (nil)\n")
		if (d->owner == NULL)
			printf("Owner: (nil)\n)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
