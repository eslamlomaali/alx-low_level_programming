#include "lists.h"

/**
* pop_listint - Write a function that deletes the head node of a listint_t
* linked list, and returns the head node’s data (n).
*
*@head: head of the list
*
*Return: poped node
*/

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n = 0;

	if (*head != NULL)
	{
		new_node = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_node;
	}

	return (n);
}
