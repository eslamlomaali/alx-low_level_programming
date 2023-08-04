#include "main.h"

/**
 * _strstr - Write a function that locates a substring.
 * @haystack: input string
 * @needle: input string
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *e = haystack;
		char *o = needle;

		while (*e == *o && *o != '\0')
		{
			e++;
			o++;
		}

		if (*o == '\0')
			return (haystack);
	}

	return ('\0');
}
