#include "main.h"

/**
 * string_toupper - Write a function that changes
 * lowercase letters of a string to uppercase.
 * @str: The string input.
 * Return: A pointer to the changed string.
 *
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
