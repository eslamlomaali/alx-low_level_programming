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
	listint_t *node, *node2;
	unsigned int c = 1;

	if (head)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);

		node->n = n;
		if (idx > 0)
		{
			node2 = *head;
			while (node2)
			{
				if (c == idx)
				{
					node->next = node2->next;
					node2->next = node;
					return (node);
				}
				node2 = node2->next;
				c++;
			}
			if (idx > c)
				return (NULL);
		}
		else
		{
			node->next = *head;
			*head = node;
		}
		return (node);
	}
	return (NULL);
}
