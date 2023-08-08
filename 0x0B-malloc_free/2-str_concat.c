#include "main.h"

/**
 * _strlen - length of string
 * @s: string
 * Return: int
 */


int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
  * str_concat - Write a function that concatenates two strings.
  * @s1: the first string
  * @s2: the second string
  *
  * Return: strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	int val1, val2, i;
	char *c;

	if (s1 == NULL)
	{
		s1 = "\0";
	}

	if (s2 == NULL)
	{
		s2 = "\0";
	}

	val1 = _strlen(s1);
	val2 = _strlen(s2);

	c = malloc((val1 + val2) * sizeof(char) + 1);

	if (c == 0)
	{
		return (0);
	}

	for (i = 0; i <= val1 + val2; i++)
	{
		if (i < val1)
		{
			c[i] = s1[i];
		}
		else
		{
			c[i] = s2[i - val1];
		}
	}
	c[i] = '\0';
	return (c);
}
