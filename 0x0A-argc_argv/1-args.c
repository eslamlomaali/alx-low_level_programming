#include "main.h"

/**
  * main - Write a program that prints the number of arguments passed into it.
  * @argc: argument counter
  * @argv: argument array size
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
