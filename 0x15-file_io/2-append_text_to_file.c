#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text
 * @f: pointer
 * @tc: content file
 * Description: appends text
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *f, char *tc)
{
	int a = 0, b;

	if (f == NULL)
		return (-1);

	if (tc == NULL)
		tc = "";


	while (tc[a] != '\0')
	{
		a++;
	}

	b = open(f, O_WRONLY | O_APPEND);

	if (b == -1)
		return (-1);

	write(b, tc, a);

	return (1);
}
