#include "main.h"

/**
  * print_binary - print binary
  *
  * @number: The number
  *
  * Return: void
  */
void print_binary(unsigned long int number)
{
	if (number == 0)
        {
		_putchar('0');
		return;
	}

	_div(number);
}

/**
  * _div - divide numbers
  * @num: number
  *
  * Return: calc of div
  */
void _div(unsigned long int num)
{
	if (num < 1)
	return;

	_div(num >> 1);

 	if (num & 1)
		_putchar('1');
	else
		_putchar('0');
}
