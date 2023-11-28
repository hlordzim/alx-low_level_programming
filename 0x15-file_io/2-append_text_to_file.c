#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len, write_result;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return -1;
	for (len = 0; text_content[len] != '\0'; len++)
		;
	write_result = write(file, text_content, len);
	close(file);

	return ((write_result != -1) ? 1 : -1);
}
