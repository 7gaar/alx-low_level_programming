#include "lists.h"

/**
 * free_listint - jfnf
 * @head: jfjf
*/
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
