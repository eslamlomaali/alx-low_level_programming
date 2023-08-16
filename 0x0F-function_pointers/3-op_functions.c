#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add two intgers
  * @a: first int
  * @b: seconed int
  *
  * Return: summiation
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts two intgers
  * @a: first int
  * @b: seconed int
  *
  * Return: different
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - moduile teo intgers
  * @a: first int
  * @b: seconed int
  *
  * Return: reminder
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide two intger
  * @a: first int
  * @b: seconed int
  *
  * Return: division
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - remainder of the division
  * @a: first int
  * @b: seconed int
  *
  * Return: reminder
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
