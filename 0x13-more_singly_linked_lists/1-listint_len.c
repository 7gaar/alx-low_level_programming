#include "lists.h"

/**
 * listint_len - hfj
 * @h: jfdk
 *
 * Return: kfjkd
*/
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
