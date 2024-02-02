#include "hash_tables.h"
/**
 * key_index - a function that gives the index.
 * @key: is the key.
 * @size: size of the array.
 * Return: the index.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;
	return (index);
}
