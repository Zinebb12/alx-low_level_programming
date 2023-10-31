#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string
 *
 * Return: 1 if it success. -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int _file;
	int nbletters;
	int something;

	if (!filename)
		return (-1);

	_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (_file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nbletters = 0; text_content[nbletters]; nbletters++)
		;

	something = write(_file, text_content, nbletters);

	if (something == -1)
		return (-1);

	close(_file);

	return (1);
}

