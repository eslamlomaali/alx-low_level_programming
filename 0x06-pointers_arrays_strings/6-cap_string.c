#include "main.h"

/**
  * cap_string - Write a function that capitalizes all words of a string.
  * @s: input
  *
  * Return: char value
  */
char *cap_string(char *s)
{
	int c = 0, i;
	int low = 13;
	char arr[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[c])
	{
		i = 0;

		while (i < low)
		{
			if ((c == 0 || s[c - 1] == arr[i]) && (s[c] >= 97 && s[c] <= 122))
				s[c] -= 32;

			i++;
		}

		c++;
	}

	return (s);
}
