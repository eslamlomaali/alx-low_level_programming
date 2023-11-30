#include "hash_tables.h"
/**
 * hash_table_set - Write a function that adds an element to the hash table.
 * @ht: hash table
 * @key: is the key
 * @value: value for the key.
 * Return: 1 on success, 0 on failurre
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

hash_node_t *trabiza;
hash_node_t *tab;
unsigned long int idx;

if (ht == NULL || *key == '\n' || *value == '\n')
	return (0);

idx = key_index((const unsigned char *)key, ht->size);
trabiza = ht->array[idx];

if (trabiza == NULL)
{
	tab = n_create(key, value);
	if (tab == NULL)
		return (0);

	ht->array[idx] = tab;
	return (1);
}


while (trabiza != NULL)
{
	if (strcmp(key, trabiza->key) == 0)
	{
		free(trabiza->value);
		trabiza->value = strdup(value);
		return (1);
	}
	trabiza = trabiza->next;
}

tab = n_create(key, value);
if (tab == NULL)
	return (0);

tab->next = ht->array[idx];
ht->array[idx] = tab;
return (1);
}

/**
 * n_create - create a new node
 * @key: is the key
 * @value: value associated with the key
 * Return: 1 on success, 0 on failurre
 */

hash_node_t *n_create(const char *key, const char *value)
{
	hash_node_t *tab;

	tab = malloc(sizeof(hash_node_t));

	if (tab == NULL)
		return (NULL);

	tab->key = strdup(key);
	tab->value = strdup(value);
	tab->next = NULL;

	return (tab);
}
