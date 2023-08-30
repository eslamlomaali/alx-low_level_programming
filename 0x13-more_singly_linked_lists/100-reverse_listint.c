#include "lists.h"

/**
  * reverse_listint - Write a function that reverses a listint_t linked list.
  * @head: headd of linked list
  *
  * Return: reversed linked list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *n = NULL;

	if (head)
	{
		while (*head)
		{
			n = *head;
			*head = (*head)->n;
			n->n = p;
			p = n;
		}

		*head = p;
		return (*head);
	}

	return (NULL);
}
