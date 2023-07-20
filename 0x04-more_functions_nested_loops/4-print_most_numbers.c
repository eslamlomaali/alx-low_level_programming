#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * Description: print all from 0 to 9 without print 2&4
 * Return: The numbers
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	}
		_putchar('\n');
}

