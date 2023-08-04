#include "main.h"

/**
  * main - Write a program that prints all arguments it receives.
  * @argc: argument counter
  * @argv: argument array size
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
