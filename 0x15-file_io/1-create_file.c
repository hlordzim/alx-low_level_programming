#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file with the given content.
 * @filename: the name of the file to create
 * @text_content: the content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, len, write_result;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++);

		write_result = write(file, text_content, len);
		if (write_result == -1)
		{
			close(file);
			return -1;
		}
	}
	close(file);
	return 1;
}
