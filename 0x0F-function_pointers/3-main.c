#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - checking
  * @argc: arg of num
  * @argv: arg vector
  *
  * Return: void
  */
int main(int argc, char *argv[])
{
	int (*oprtaion)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprtaion = get_op_func(argv[2]);

	if (!oprtaion)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprtaion(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
