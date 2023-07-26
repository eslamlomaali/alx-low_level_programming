#include "main.h"

/**
 * _strncpy - Write a function that copies a string.
 * @dest: The dest input.
 * @src: The source input.
 * @n: The  number of bytes from src.
 * Return: A pointer to the resulting string dest.
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; s < n && src[s] != '\0'; s++)
		dest[s] = src[s];

	while (s < n)
	{
		dest[s] = '\0';
		s++;
	}
	return (dest);
}
