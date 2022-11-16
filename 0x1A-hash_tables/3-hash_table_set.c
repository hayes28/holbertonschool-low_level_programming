#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - function that adds
 * an element to the hash table.
 *
 * @ht: hash table to add or update the key/value to
 * @key: the key, cant be empty
 * @value: associated with key, must be duplicated, cant be
 * empty.
 *
 * Return: 1 for success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
