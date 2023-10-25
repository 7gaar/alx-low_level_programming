#include "main.h"

/**
 * is_palindrome_recursive - function returns 1 if string is a palindrome 0 els
 * @s: string
 *
 * OCT 25th 23
 * Ahmed Ali
 *
 * Return: 1 if paindrome, 0 if not
 */
int is_palindrome_recursive(char *s)
{
	if (*s == '\0' || *(s + 1) == '\0')
		return (1);

	int length = strlen(s);

	return (is_palindrome_recursive(s + 1) && s[0] == s[length - 1]);
}
