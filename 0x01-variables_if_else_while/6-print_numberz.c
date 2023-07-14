#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program  prints 0 to 9 using putchar
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
