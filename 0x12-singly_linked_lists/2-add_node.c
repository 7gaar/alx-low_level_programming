#include "lists.h"

/**
 * *add_node - kfjgfk
 * @str: oigfheoj
 * @head: oijfo
 *
 * Return: oijfoi
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *malaz;

	malaz = malloc(sizeof(list_t));
	if (malaz == NULL)
		return (NULL);
	malaz->str = strdup(str);
	malaz->len = strlen(str);
	malaz->next = *head;
	*head = malaz;
	return (*head);
}
