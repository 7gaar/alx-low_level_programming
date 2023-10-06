#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	for (j = 0; j < 6; j++)
	{
		putchar(97 + j);
	}
	putchar('\n');
	return (0);
}
