#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concates two string
 * @s1: string to concate
 * @s2: string to concate
 * @n: bytes
 *
 * NOV 2nd 23
 * Ahmed Ali
 *
 * Return: pointer to concated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len1, len2;

	len1 = 0;
	len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n >= len2)
		ptr = malloc(sizeof(char) * (len1 * len2 + 1));
	else
		ptr = malloc(sizeof(char) * (len1 * n + 1));
	if (ptr == 0)
		return (0);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	if (n < len2)
	{
		for (j = 0; j < n; j++)
			ptr[i + j] = s2[j];
	}
	if (n >= len2)
	{
		for (j = 0; j < len2; j++)
			ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
