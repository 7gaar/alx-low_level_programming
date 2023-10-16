#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts_half(char *str)
{
	int string = 0, k;

	while (str[string] != '\0')
		string++;
	if (string + 1 % 2 != '0')
		k = (string - 1) / 2;
	else
		k = (string / 2);
	k++;

	for (string = k; str[string] != '\0'; string++)
	_putchar(str[string]);
	_putchar('\n');
}
