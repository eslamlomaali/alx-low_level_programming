#include "main.h"

/**
 *main - Entry point
 *
 *Description: print _putchar using prototype
 *
 *Return : Always 0 success
*/

int main(void)
{
	char str[] = "_putchar";
	int cha;

	for (cha = 0; cha < 8; cha++)
		_putchar(str[cha]);
	_putchar('\n');

	return (0);
}
