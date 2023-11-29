#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

#define BUFFER_SIZE 1024
/**
 * print_error - prints error
 * @code: code to print
 * @message: message to print
 * @file_from file_to: content of a file to another file.
 *
 * Return: return (0).
 */

void print_error(int code, const char *message, ...)
{
    va_list args;
    va_start(args, message);
    dprintf(STDERR_FILENO, message, args);
    va_end(args);
    exit(code);
}

int main(int argc, char *argv[])
{
	int file_from, file_to, read_result, write_result;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		print_error(97, "Usage: cp file_from file_to\n");
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		print_error(99, "Error: Can't write to file %s\n", argv[2]);
	}
	while ((read_result = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_result = write(file_to, buffer, read_result);
		if (write_result == -1)
		{
			print_error(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}
	if (read_result == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(file_from) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", file_from);
	}
	if (close(file_to) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", file_to);
	}
	return (0);
}
