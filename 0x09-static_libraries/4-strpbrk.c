#include "main.h"

/**
 * _strpbrk - Write a function that searches a string for any of a set of byte
 * @s: string
 * @accept: string
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int m, l;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (l = 0; accept[l] != '\0'; l++)
		{
			if (s[m] == accept[l])
				return (s + m);
		}
	}

	return ('\0');
}
