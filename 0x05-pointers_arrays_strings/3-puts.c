#include "main.h"
/**
 * _puts -  prints a string
 * Discription: a function that prints a string, followed by a new line
 *
 * OCT 10th 2023
 * Ahmad Ali
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
