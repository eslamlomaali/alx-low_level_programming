#include "lists.h"

/**
  *  print_listint - Write a function that prints all the
  *  elements of a listint_t list.
  *
  * @h: The head of the linked list
  *
  * Return: number of nodes of the linked list
  */
size_t print_listint(const listint_t *h)
{
	int c = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			c++;
		}
	}

	return (c);
}
