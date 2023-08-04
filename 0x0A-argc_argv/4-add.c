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
	unsigned int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
			sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
