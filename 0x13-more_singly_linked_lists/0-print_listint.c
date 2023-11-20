#include "lists.h"

/**
 * print_listint - jkd
 * @h: jf
 *
 * Return: kjfid
*/
size_t print_listint(const listint_t *h)
{
	size_t coun = 0;

	while (h)
	{
		printf("%d\n", h->n);
		coun++;
		h = h->next;
	}

	return (coun);
}
