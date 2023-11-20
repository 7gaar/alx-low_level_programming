#include "lists.h"

/**
 * print_listint - jkd
 * @h: jf
 *
 * Return: kjfid
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	listint_t *new;

	new = malloc(sizeof(listint_t));
	if  (new == 0)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
