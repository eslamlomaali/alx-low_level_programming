#include "main.h"

/**
  * binary_to_uint - Write a function that converts a binary
  * number to an unsigned int.
  * @b: The binary string
  *
  * Return: converted number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0, c = 0, i = 0;

	if (b == NULL)
		return (0);

	a = _strlen(b);
	while (a--)
	{
		if (b[a] != 48 && b[a] != 49)
			return (0);

		if (b[a] == 49)
			i += 1 << c;

		c++;
	}

	return (i);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
