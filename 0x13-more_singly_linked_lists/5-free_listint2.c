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

	if (!head)
		return;

	n = *head;
	while (n)
	{
		f = n;
		n = n->next;
		free(f);
	}
	*head = NULL;
}

