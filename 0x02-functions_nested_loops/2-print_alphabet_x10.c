#include"main.h"

/**
 * print_alphabet - prints 10 times the alphabet, in lowercase
 *
*/

void print_alphabet(void)
{
	int rows, cha;

	for (rows = 0; rows <= 9; rows++)
	{
		for (cha = 'a'; cha <= 'z'; cha++)
			_putchar(cha);
		_putchar('\n');
	}
}

