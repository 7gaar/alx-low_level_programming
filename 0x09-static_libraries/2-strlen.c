#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * Discription: Returning the length of a string
 * @s: string that its length wil be found
 *
 * OCT 16th
 * Ahmad Ali
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
