#include "main.h"
#include <stdlib.h>

/**
 * main - Write a program that prints the minimum number of
 * coins to make change for an amount of money.
 * @argc: The number of arguments
 * @argv: An array of pointers
 *
 * Return: If the number of arguments is not - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)

	{
	int a, lcent = 0, money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (a = 0; a < 5; a++)
	{
		if (money >= cents[a])
		{
			lcent += money / cents[a];
			money = money % cents[a];
			if (money % cents[a] == 0)
			{
				break;
			}
		}
		printf("%d\n", lcent);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
