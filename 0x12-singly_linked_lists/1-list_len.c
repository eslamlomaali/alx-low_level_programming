#include "lists.h"

/**
  * list_len - Write a function returns the number of
  * elements in a linked list_t list
  *
  * @h: A linked list
  *
  * Return: The number of elements
  */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	for (; h; h = h->next)
	{
		c++;
	}

	return (c);
}
