#include "main.h"
/**
 * read_textfile -this function reads a text file and prints
 * it to the POSIX standard output.
 * @filename: char
 * @letters: list
 * Return: size of the list
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_file, write_read;
	ssize_t sizeoflist;
	char *buffer = malloc(letters);

	if (buffer == NULL)
	{
		return (0);
	}
	if (filename == NULL)
		return (0);
	open_file = open(filename, O_RDONLY, 0600);
	if (open_file == -1)
	{
		return (0);
	}
	sizeoflist = read(open_file, buffer, letters);
	buffer[letters] = '\0';
	close(open_file);
	write_read = write(STDOUT_FILENO, buffer, sizeoflist);
	if (write_read == -1)
	{
		return (0);
	}
	return (sizeoflist);
}
