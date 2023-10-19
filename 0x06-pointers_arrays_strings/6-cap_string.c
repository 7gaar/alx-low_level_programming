#include "main.h"

/**
 * cap_string - capitalizes all  words of a string
 * @s: string to be  modified
 *
 * OCT 19th 23
 * Ahmad Ali
 *
 * Return: resulting string
 */
char *cap_string(char *s)
{
	int o, p;

	char spells[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (o = 0; s[o] != '\0'; o++)
	{
		if (o == 0 && s[o] >= 'a' && s[o] <= 'z')
			s[o] -= 32;

		for (p = 0; p < 13; p++)
		{
			if (s[o] == spells[p])
			{
				if (s[o + 1] >= 'a' && s[o + 1] <= 'z')
				{
					s[o + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
