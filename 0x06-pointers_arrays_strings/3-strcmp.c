#include "main.h"

/**
  * _strcmp - Write a function that compares two strings.
  * @s1: The first string
  * @s2: The second string
  *
  * Return: 1 if true , else 0
  */
int _strcmp(char *s1, char *s2)
{
	int e = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			e = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++
	}
	return (e);
}
