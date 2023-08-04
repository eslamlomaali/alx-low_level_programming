#include "main.h"

/**
 * _puts -Wrire a function thta prints a string
 * @str: String to print
 * Return: nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
