#include "main.h"

/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: string
 * @accept: bytes
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int y, z, pos, neg;

	pos = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		neg = 0;

		for (z = 0; accept[z] != '\0'; z++)
		{
			if (accept[z] == s[y])
			{
				pos++;
				neg = 1;
			}
		}

		if (neg == 0)
			return (pos);
	}

	return (pos);
}
