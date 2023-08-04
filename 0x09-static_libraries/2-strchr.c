#include <stdio.h>
#include "main.h"

/**
 * _strchr - Write a function that locates a character in a string.
 * @s: pointer
 * @c: input constnt
 * Return: Always 0 (Success) pointer
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)

		if (s[x] == c)
			return (s + x);


	return ('\0');
}
