#include "main.h"

/**
  * binary_to_uint - converts a binary
  * @bin: The binary string
  *
  * Return: converted number
  */
unsigned int binary_to_uint(const char *bin)
{
	unsigned int x = 0, y = 0, z = 0;

	if (bin == NULL)
		return (0);

	x = _strlen(bin);
	while (x--)
	{
		if (bin[x] != 48 && bin[x] != 49)
			return (0);

		if (bin[x] == 49)
			z += 1 << y;

		y++;
	}

	return (z);
}

/**
  * _strlen - calc the length of a string
  * @s: String
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int a = 0;

	while (s[a])
	a++;

	return (a);
}
