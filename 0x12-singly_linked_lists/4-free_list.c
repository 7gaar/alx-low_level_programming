#include "lists.h"

/**
 * free_list - ajoefm
 * @head: rifoe
 *
 * Return: kfmok
*/
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		if (head->len)
			free(head->len);
		free(head);
	}
}
