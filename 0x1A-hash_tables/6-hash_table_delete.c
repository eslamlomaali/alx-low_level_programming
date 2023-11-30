#include "hash_tables.h"
/**
 * hash_table_delete - Write a function that deletes a hash table.
 * @ht: the hash table you want to delete
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int x;
hash_node_t *n;

if (ht == NULL)
	return;

for (x = 0; x < ht->size; x++)
{
	n = ht->array[x];
	free_list(n);
}
free(ht->array);
free(ht);
}


/**
 * free_list - frees list
 * @head: head of linked list
 */
void free_list(hash_node_t *head)
{
	hash_node_t *cur;
	hash_node_t *next;

	cur = head;

	while (cur != NULL)
	{
		next = cur->next;
		free(cur->key);
		free(cur->value);
		free(cur);
		cur = next;
	}
}
