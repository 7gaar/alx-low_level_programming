#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * OCT 19th 23 
 * Ahmad Ali 
 *
 * Return: resulting string
 */
char *string_toupper(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] >= 'a' && s[k] <= 'z')
			s[k] = s[k] - 32;
	}

	return (s);
}
