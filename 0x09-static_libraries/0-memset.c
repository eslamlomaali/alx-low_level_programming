#include "main.h"

/**
 * _memset - Entry point
 * @s: pointer
 * @b: constant byte
 * @n: bytes
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int loop;

	for (loop = 0; loop < n; loop++)
	{
		s[loop] = b;
	}

	return (s);
}
