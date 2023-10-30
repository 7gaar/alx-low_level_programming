#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - a function that duplicates the string
 * @str: string to be duplicated
 *
 * OCT 30th 23
 * Ahmed Ali
 *
 * Return: a pointer to the copied string (Success), 0 (Error)
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, length;

	length = 0;
	if (str == 0)
		return (0);
	while (str[length])
		length++;
	ptr = malloc(sizeof(char) * (length + 1));
			if (ptr == 0)
			return (0);
			for (i = 0; str[i] != '\0'; i++)
			ptr[i] = str[i];
			return (ptr);
}
