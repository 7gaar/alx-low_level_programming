#include "lists.h"

/**
 * *add_node_end - kfjgfk
 * @str: oigfheoj
 * @head: oijfo
 *
 * Return: oijfoi
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *malaz;
	list_t *temp;

	malaz = malloc(sizeof(list_t));
	if (malaz == NULL)
		return (NULL);
	malaz->str = strdup(str);
	malaz->len = strlen(str);
	malaz->next = NULL;

	if (*head == NULL)
	{
		*head = malaz;
		return (malaz);
	}
	 temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = malaz;
	return (malaz);
}
