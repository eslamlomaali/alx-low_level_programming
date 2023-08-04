#include "main.h"
#include <stdlib.h>

/**
  * main - Write a program that adds positive numbers.
  * @argc: argument counter
  * @argv: argument array size
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int total = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return(printf("Error\n"), 1)
			total += atoi(argv[argc]);
	}
	printf("%d\n", total);
	return (0);
}
