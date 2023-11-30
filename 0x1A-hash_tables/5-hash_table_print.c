#include "hash_tables.h"
/**
 * hash_table_print - Write a function that prints a hash table.
 * @ht: the hash tablw will  print
 */
void hash_table_print(const hash_table_t *ht)
{

unsigned long int x;
hash_node_t *n;
short int c = 0;

if (ht == NULL)
	return;

putchar('{');
for (x = 0; x < ht->size; x++)
{
	n = ht->array[x];
	while (n != NULL)
	{
		if (c)
			printf(", ");

		printf("'%s': '%s'", n->key, n->value);
		n = n->next;

		if (c == 0)
			c = 1;
	}
}
printf("}\n");
}
