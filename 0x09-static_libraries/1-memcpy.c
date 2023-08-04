#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * @dest: input
 * @src: source
 * @n: length
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int e;

	for (e = 0; e < n; e++)
	{
		dest[e] = src[e];
	}

	return (dest);
}
