#include "main.h"
/**
 * print_rev - reverses the string
 * @s - string
 * Discription: a function that prints a string, in reverse, followed by a new line.
 *
 * 0CT 16th
 * Ahmad Ali
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int l, m;

	m = 0;
	while (s[m] != '\0')
		m++;

	for (l = m - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
