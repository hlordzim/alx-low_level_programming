#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: pointer to the name of the file
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	lenr = read(file, buffer, letters);
	if (lenr <= 0)
	{
		free(buffer);
		close(file);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	close(file);

	if (lenw != lenr)
	{
		return (0);
	}
	return (lenr);
}
