#include "main.h"

/**
 * _strlen_recursion - returns the length
 * @s: string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * c - compares each character
 * @s: string
 *
 * @num1: input iterator.
 * @num2: input iterator.
 * Return: nothing
 */
int c(char *s, int num1, int num2)
{
	if (*(s + num1) == *(s + num2))
	{
		if (num1 == num2 || num1 == num2 + 1)
		{
			return (1);
		}
		return (0 + c(s, num1 + 1, num2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - Write a function that returns
 * 1 if a string is a palindrome and 0 if not.
 *
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (c(s, 0, _strlen_recursion(s) - 1));
}
