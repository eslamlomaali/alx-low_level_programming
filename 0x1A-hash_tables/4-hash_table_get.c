#include "hash_tables.h"
/**
 * hash_table_get - Write a function that retrieves a value associated with
 * a key.
 * @ht: the hash table
 * @key: key for searching
 * Return: value associated with key if found, NULL if failed
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

hash_node_t *n;
unsigned long int idx;

if (ht == NULL)
	return (NULL);

idx = key_index((const unsigned char *) key, ht->size);
n = ht->array[idx];

while (n != NULL)
{
	if (strcmp(n->key, key) == 0)
		return (n->value);

	n = n->next;
}
return (NULL);
}
