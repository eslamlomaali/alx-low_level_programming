#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: name of the file
 * @text_content: content will be written in the file.
 *
 * Return: 1 success , -1 fails.
 */
int create_file(const char *filename, char *text_content)
{
	int cnf;
	int s;
	int w;

	if (!filename)
		return (-1);

	cnf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (cnf == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (s = 0; text_content[s]; s++)
		;

	w = write(cnf, text_content, s);

	if (w == -1)
		return (-1);

	close(cnf);

	return (1);
}
