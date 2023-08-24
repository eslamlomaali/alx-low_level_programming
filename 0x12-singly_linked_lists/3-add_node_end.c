#include "lists.h"

/**
  * add_node_end - Write a function that adds a new node
  * at the end of a list_t list.
  *
  * @head: The main linked list
  * @str: The string
  *
  * Return: The address
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *w, *p;

	if (str)
	{
		w = malloc(sizeof(list_t));
		if (w == NULL)
			return (NULL);

		w->str = strdup(str);
		w->len = _strlen(str);
		w->next = NULL;

		if (*head == NULL)
		{
			*head  = w;
			return (*head);
		}
		else
		{
			p = *head;
			while (p->next)
				p = p->next;

			p->next = w;
			return (p);
		}
	}

	return (NULL);
}

/**
  * _strlen - Returns the length of a string
  * @s: String
  *
  * Return: String
  */
int _strlen(const char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}

	return (i);
}
