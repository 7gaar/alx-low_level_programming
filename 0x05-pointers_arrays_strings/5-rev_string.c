#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses the string
 * @s: string to be reversed
 *
 * OCT 16th 23
 * Ahmad Ali
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int l = 0, m, n;
	char o;

	while (s[l] != '\0')
	{
		l++;
	}
	n = l - 1;
	for (m = 0; n >= 0 && m < n; n--, m++)
	{
		o = s[m];
		s[m] = s[n];
		s[n] = o;
	}
}
