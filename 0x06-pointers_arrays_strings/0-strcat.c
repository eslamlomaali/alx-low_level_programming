#include "main.h"

/**
 *  _strcat - Write a function that concatenates two strings
 *  @dest: The destination input
 *  @src: The source input
 *  Return: A pointer to the resulting string to dest
 */

char *_strcat(char *dest, char *src)
{
	int s1, s2;

	for (s1 = 0; dest[s1] ; s1++)

	for (s2 = 0; src[s2] ; s2++)

		dest[s1++] = src[s2];

	return (dest);
}
