#include"main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
*/

void print_alphabet_x10(void)
{
	int rows, cha;

	for (rows = 0; rows <= 9; rows++)
	{
		for (cha = 'a'; cha <= 'z'; cha++)
			_putchar(cha);
		_putchar('\n');
	}
}

