#include "main.h"

/**
  * leet - Encodes a string into 1337
  * @c: The string input
  *
  * Return: The encoded
  */
char *leet(char *c)
{
	char *encoded = c;
	char spc[] = {'A', 'E', 'O', 'T', 'L'};
	int equal[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(spc) / sizeof(char); i++)
		{
			if (*c == spc[i] || *c == spc[i] + 32)
			{
				*c = 48 + equal[i];
			}
		}
		c++;
	}
	return (encoded);
}
