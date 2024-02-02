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
	unsigned long int hash, index;
	int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->next = NULL;
	hash = hash_djb2(key);
	index = key_index(key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = newNode->value;
			return (1);
		}
	}
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
