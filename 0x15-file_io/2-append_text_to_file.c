#include "main.h"

/**
 * append_text_to_file - Write a function that appends text the end of a file.
 *
 * @filename: name of the file.
 * @text_content: conent that append in file.
 *
 * Return: 1 file exists. -1 fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int attf;
	int s;
	int app;

	if (!filename)
		return (-1);

	attf = open(filename, O_WRONLY | O_APPEND);

	if (attf == -1)
		return (-1);

	if (text_content)
	{
		for (s = 0; text_content[s]; s++)
			;

		app = write(attf, text_content, s);

		if (app == -1)
			return (-1);
	}

	close(attf);

	return (1);
}
