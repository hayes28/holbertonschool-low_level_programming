#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated
 * with a key.
 *
 * @ht: hash table to look into
 * @key: key we're looking for
 *
 * Return: value of the element, NULL is key isnt found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *find;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	find = ht->array[index];

	if (!(find))
		return (NULL);

	while (find)
	{
		if (strcmp(find->key, key) == 0)
			return (find->value);
		find = find->next;
	}
	return (NULL);
}
