#include "lists.h"

/**
  * add_node -Write a function that adds a new node at the end of list_t list
  * @head: Main linked list
  * @str: The string
  *
  * Return: The address
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

	if (head != NULL && str != NULL)
	{
		p = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		p->str = strdup(str);
		p->len = _strlen(str);
		p->next = *head;

		*head = p;

		return (p);
	}

	return (0);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to
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
