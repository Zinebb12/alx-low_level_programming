#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: Null terminaed string
 *
 * Return: 1 if the file exists. -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _file;
	int nbletters;
	int _write;

	if (!filename)
		return (-1);

	_file = open(filename, O_WRONLY | O_APPEND);

	if (_file == -1)
		return (-1);

	if (text_content)
	{
		for (nbletters = 0; text_content[nbletters]; nbletters++)
			;

		_write = write(_file, text_content, nbletters);

		if (_write == -1)
			return (-1);
	}

	close(_file);

	return (1);
}

