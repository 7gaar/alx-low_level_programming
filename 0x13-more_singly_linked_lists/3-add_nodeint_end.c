#include "lists.h"

/**
 * add_nodeint_end - hffjfh
 * @head: fkjf
 * @n: jfjfj
 *
 * Return: jffjjf
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == 0)
		return (0);
	new->n = n;
	new->next = NULL;

	if (*head == 0)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
