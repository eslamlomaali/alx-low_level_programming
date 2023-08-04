#include "main.h"

/**
 *  _strncat - Write a function that concatenates two strings.
 *
 *  @dest: The string to dest input
 *
 *  @src: The string to src input
 *
 *  @n: The number of bytes from src
 *
 *  Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	d = 0;

	while (dest[d])
		d++;

	for (s = 0; s < n && src[s] != '\0'; s++)
		dest[d + s] = src[s];

	dest[d + s] = '\0';

	return (dest);

}
