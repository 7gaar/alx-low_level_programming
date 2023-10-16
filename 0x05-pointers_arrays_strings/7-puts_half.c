#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 *
 * OCT 16th
 * Ahmad Ali
 *
 * Return: 0 is success
 */
void puts_half(char *str)
{
	int string = 0, k;

	while (str[length] != '\0')
		length++;
	if (length + 1 % 2 != '0')
		k = (length - 1) / 2;
	else
		k = (length / 2);
	k++;

	for (length = k; str[length] != '\0'; length++)
	_putchar(str[length]);
	_putchar('\n');
}
