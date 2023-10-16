#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 * Description: starting with the first character, followed by a new line.
 *
 * OCT 16th 23
 * Ahmad Ali
 *
 * Return: 0 Always.
 */
void rev_string(char *s)
{
	int k = 0, l, m;
	char n;

	while (s[k] != '\0')
	{
		k++;
	}
	m = k - 1;
	for (l = 0; m >= 0 && l < m; m--, l++)
	{
		n = s[l];
		s[l] = s[m];
		s[m] = n;
	}
}
