#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
  * main - Write a program that adds positive numbers.
  * @argc: argument counter
  * @argv: argument array size
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int i;
	unsigned int num, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];

			for (num = 0; num < strlen(c); num++)
			{
				if (c[num] < 48 || c[num] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(c);
			c++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
