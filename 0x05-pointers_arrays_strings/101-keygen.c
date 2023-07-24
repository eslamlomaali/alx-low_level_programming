#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *   main - Generates random valid passwords for 101-crackme
 *   Return: Always 0.
 */

int main(void)
{
	int pass;
	char c;

	srand(time(NULL));
	while (pass <= 2645)
	{
		c = rand() % 128;
		pass += c;
		putchar(c);
	}
	putchar(2772 - pass);
	return (0);
}
