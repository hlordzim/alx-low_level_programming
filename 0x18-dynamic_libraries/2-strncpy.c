#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copy at most n characters from src to dest.
 * @dest: The destination string.
 * @src: The source string to copy from.
 * @n: The maximum number of characters to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (dest_start);
}
