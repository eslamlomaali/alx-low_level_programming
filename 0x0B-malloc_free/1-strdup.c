#include "main.h"

/**
  * _strdup - Write a function that returns a pointer to newly allocated space
  * in memory,which contains a copy of the string given as a parameter.
  *
  * @str: the string input
  *
  * Return: the string
  */
char *_strdup(char *str)
{
	int x = 0, size = 0;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[size] != '\0'; size++)
	;

	c = malloc(size * sizeof(*str) + 1);

	if (c == 0)
	{
		return (NULL);
	}

	else
	{
		for (; x < size; x++)
		{
			c[x] = str[x];
		}
	}

	return (c);
}
