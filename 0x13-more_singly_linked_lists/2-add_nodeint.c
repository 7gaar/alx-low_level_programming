#include "lists.h"

/**
 * add_nodeint - jdkf
 * @head: fjf
 * @n: fjfj
 *
 * Return: fjfj
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == 0)
		return (0);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
