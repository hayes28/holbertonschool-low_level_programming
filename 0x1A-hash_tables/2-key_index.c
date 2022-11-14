#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 *
 * @key: the key
 * @size: size of array
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
