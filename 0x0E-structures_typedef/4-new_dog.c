#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that gets a length of string
 *
 * @s: the string to get the length
 *
 * Return: length of @str
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * _strcopy - a function that returns @dest with a copy of a string from @src
 *
 * @src: string to copy
 * @dest: copy string to here
 *
 * Return: @dest
*/

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: struct pointer, NULL if function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptrd;

	if (!name || age < 0 || !owner)
		return (NULL);

	ptrd = (dog_t *) malloc(sizeof(dog_t));
	if (ptrd == NULL)
		return (NULL);

	ptrd->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ptrd->name == NULL)
	{
		free(ptrd);
		return (NULL);
	}

	ptrd->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ptrd->owner == NULL)
	{
		free(ptrd->name);
		free(ptrd);
		return (NULL);
	}

	ptrd->name = _strcopy(ptrd->name, name);
	ptrd->age = age;
	ptrd->owner = _strcopy(ptrd->owner, owner);

	return (ptrd);
}
