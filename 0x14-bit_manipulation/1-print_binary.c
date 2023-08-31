#include "main.h"

/**
  * print_binary - Write a function that prints the
  * binary representation of a number.
  *
  * @n: The number
  *
  * Return: Nothing
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_divide(n);
}

/**
  * _divide - divide numbers
  * @n: number to div
  *
  * Return: div
  */
void _divide(unsigned long int n)
{
	if (n < 1)
		return;

	_divide(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
