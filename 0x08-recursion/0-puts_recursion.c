#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: a string to be printed
 *
 * OCT 25th 23
 * Ahmed Ali
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
