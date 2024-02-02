#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element.
 * @ht: hash table.
 * @key: is the key.
 * @value: value associated with the key.
 * Return: 1 if success, 0 if failed.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	char *value_cp;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cp;
			return (1);
		}
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(value_cp);
		return (0);
	}
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = value_cp;
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
