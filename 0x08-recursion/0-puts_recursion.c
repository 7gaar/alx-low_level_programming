#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 *
 * OCT 25th 23
 * Ahmed Ali
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}
