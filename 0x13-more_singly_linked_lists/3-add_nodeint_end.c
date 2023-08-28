#include "lists.h"

/**
 * add_nodeint_end - Write a function that adds a new node at
 * the end of a listint_t list.
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 *
 *Return: pointer to the node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *nodes;
	nodes = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (nodes->next != NULL)
			nodes = nodes->next;

		nodes->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
