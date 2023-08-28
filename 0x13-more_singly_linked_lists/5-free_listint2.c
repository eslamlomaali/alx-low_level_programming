#include "lists.h"

/**
* free_listint2 - Write a function that frees a listint_t list.
* @head: pointer to the head
*
* Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *n;
	listint_t *f;

	n = *head;
	if (!head)
	{
		return;
	}

	for (; n; n = n->next)
	{
	list_t *f = n;
		free(f);
	}

	*head = NULL;
}

