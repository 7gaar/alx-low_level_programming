#include "lists.h"

/**
 * get_nodeint_at_index - fjf
 * @head: fjdfkd
 * @index: fjdfk
 *
 * Return: dfjjkdjf
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	tmp = head;
	if (head == NULL)
		return (0);
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
		if (tmp == 0)
		{
			return (0);
		}
	}
	return (tmp);
}
