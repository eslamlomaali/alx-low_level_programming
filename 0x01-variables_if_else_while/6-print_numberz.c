#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  program that prints the single numbers of base 10 start from 0
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar("\n");

	return (0);
}
