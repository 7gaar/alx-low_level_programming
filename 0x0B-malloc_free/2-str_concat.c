#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - a function that concates two strings
 * @s1: first string
 * @s2: second string
 *
 * OCT 30th 23
 * Ahmed Ali
 *
 * Return: a pointer to the new string (Success), 0 (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int length1, length2, i, j;

	length1 = 0;
	length2 = 0;

	while (s1[length1])
		length1++;
	while (s2[length2])
		length2++;
	ptr = malloc(sizeof(char) * (length1 + length2 + 1));
	if (ptr == 0)
		return (0);

	if (s1)
	{
		for (i = 0; i < length1; i++)
		{
			ptr[i] = s1[i];
		}
	}
	if (s2)
	{
		for (j = 0; j < length2; j++)
		{
			ptr[i] = s2[j];
			i++;
			j++;
		}
	}
	ptr[i + j] = '\0';
	return (ptr);
}
