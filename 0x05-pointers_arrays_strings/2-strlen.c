#include "main.h"

/**
 *  _strlen - Write a function that  returns the length of a string.
 * @s: String input
 * Return: Length of string.
 */

int _strlen(char *s)
{
	int loop;

	for (loop = 0; *s != '\0'; s++)
		loop++;
	return (loop);
}
