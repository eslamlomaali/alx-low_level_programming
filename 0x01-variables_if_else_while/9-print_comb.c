#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  program that prints all combinations of single-digit numbers
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + 48);

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}
	putchar('\n');

	return (0);
}
