#include "lists.h"


/**
 * listint_len - Write a function that returns the number of
 * elements in a linked listint_t list.
 * @h: A pointer to the head of the list
 *
 *
 * Return: the number of elements in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);

}
