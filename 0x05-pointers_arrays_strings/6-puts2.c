#include "main.h"

/**
 * puts2 - Write afunction that Prints every other character of a string.
 * @str: The string input
 * Return: nothing
 */

void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		if (s % 2 == 0)
			_putchar(str[s]);
	}
	_putchar('\n');
}
