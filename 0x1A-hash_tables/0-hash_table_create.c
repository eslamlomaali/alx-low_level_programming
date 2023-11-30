#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The array size
 *
 * Return: error  if NULL.
 *         else - a pointer to hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *trabiza;
	unsigned long int x;

	trabiza = malloc(sizeof(hash_table_t));
	if (trabiza == NULL)
		return (NULL);

	trabiza->size = size;
	trabiza->array = malloc(sizeof(hash_node_t *) * size);
	if (trabiza->array == NULL)
	{
		free(trabiza);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		trabiza->array[x] = NULL;

	return (trabiza);
}
