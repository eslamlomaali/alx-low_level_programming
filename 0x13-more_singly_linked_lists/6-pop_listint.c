#include "lists.h"

/**
* pop_listint - Write a function that deletes the head node of a listint_t
* linked list, and returns the head node’s data (n).
*
*@head: head of the list
*
*Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int i;

	if (!head || !*head)
	return (0);

	pop = (*head)->next;
	i = (*head)->i;
	free(*head);
	*head = pop;
	return (i);
}
