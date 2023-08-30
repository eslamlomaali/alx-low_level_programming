#include "lists.h"

/**
  * reverse_listint - Write a function that reverses a listint_t linked list.
  * @head: headd of linked list
  *
  * Return: reversed linked list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = p;
			p = next;
		}

		*head = p;
		return (*head);
	}

	return (NULL);
}
