#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: name of the file to read
 * @letters: numbers of letters it should read and print
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t _read, _write;
	char *something;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	something = malloc(sizeof(char) * (letters));
	if (!something)
		return (0);

	_read = read(fd, something, letters);
	_write = write(STDOUT_FILENO, something, _read);

	close(fd);

	free(something);

	return (_write);
}

