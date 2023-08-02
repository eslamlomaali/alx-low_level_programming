#include "main.h"

int check_prime(int a, int i);

/**
  * is_prime_number - Write a function that returns
  * 1 if the input integer is a prime number, otherwise return 0.
  *
  * @a: the number
  *
  * Return: integer value
  */
int is_prime_number(int a)
{
	return (check_prime(a, 1));
}

/**
  * check_prime - Write a function that returns
  * 1 if the input integer is a prime number, otherwise return 0.
  *
  * @a: the number
  * @i: the iterate
  *
  * Return: 1 for prime or 0
  */
int check_prime(int a, int i)
{
	if (a <= 1)
	{
		return (0);
	}
	if (a % i == 0 && i > 1)
	{
		return (0);
	}
	if ((a / i) < i)
	{
		return (1);
	}
	return (check_prime(a, i + 1));
}
