#include "hash_tables.h"

/**
 * key_index - Write a function that gives you the index of a key.
 * @key: key
 * @size: the array size
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = hash_djb2(key) % size;

	return (idx);
}
