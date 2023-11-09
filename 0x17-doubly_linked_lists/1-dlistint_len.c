#include "lists.h"

/**
 * dlistint_len - Write a function that returns the number
 * of elements in a linked dlistint_t list.
 *
 * @h: pointer to the head  of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
		h = h->next;
	return (x);
}
