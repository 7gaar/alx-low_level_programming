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
	int i, j;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return(s1);

	if (ptr == 0)
		return (0);

	for (i = 0; i < length1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < length2; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
