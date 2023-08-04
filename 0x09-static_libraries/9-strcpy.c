#include "main.h"

/**
 *   _strcpy - Write a function that Copies the string pointed
 *   @dest: String
 *   @src: String
 *   Return:  pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int z;

	for (z = 0; src[z] != '\0'; z++)
	{
		dest[z] = src[z];
	}
	dest[z++] = '\0';
	return (dest);
}
