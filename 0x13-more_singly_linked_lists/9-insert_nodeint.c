#include "lists.h"

/**
 * insert_nodeint_at_index - Write a function that inserts a
 * new node at a given position.
 *
 * @head: pointer to the head of the list
 * @idx: index of the node to be added
 * @n: content of the new node
 *
 * Return: the address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = NULL;
	listint_t *node2 = NULL;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL || idx > listint_len(*head))
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				node->next = *head;
				*head = node;
				return (node);
			}
			node->next = node2->next;
			node2->next = node;
			return (node);
		}
		else if ((i + 1) == idx)
			node2 = *head;
		head = &((*head)->next);
		i++;
	}
	return (NULL);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t = *h;
	size_t c = 0;

	while (h != NULL)
	{
		c += 1;
		h = h->next;
	}
	return (c);
}
