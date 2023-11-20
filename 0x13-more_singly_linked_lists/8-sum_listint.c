#include "lists.h"

/**
 * sum_listint - fdjffhhgjhj
 * @head: fjdkfd
 *
 * Return: fkjdkdjf
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == 0)
		return (0);
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
