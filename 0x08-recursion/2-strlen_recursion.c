#include "main.h"

/**
 * _strlen_recursion - a functon that gibes the length of a srting
 * @s: a string that its length will be found
 *
 * OCT 25th 23
 * Ahmeed Ali
 *
 * Return: length of @s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
