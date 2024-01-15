#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copy a string from src to dest, including the null terminator.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	if (dest == NULL || src == NULL)
	{
	return (NULL);
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (original_dest);
}
