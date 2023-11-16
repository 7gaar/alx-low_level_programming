#include "lists.h"

/**
 * list_len - a firer
 * @h: origjof
 *
 * Return: dfijvnef
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
