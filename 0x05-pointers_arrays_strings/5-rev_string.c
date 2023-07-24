#include "main.h"

/**
 * rev_string - Write a funcation that reverses a string
 * @s: The string input
 * Return: nothing
 */

void rev_string(char *s)
{
	int a, b;
	char rev;

	for (a = 0; s[a] != '\0'; a++)
		;
	for (b = 0; b < a / 2; b++)
	{
		rev = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = rev;

	}
}
