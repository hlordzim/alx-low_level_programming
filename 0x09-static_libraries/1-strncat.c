#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates at most n bytes from src to dest.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes to append from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_start = dest;


	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (dest_start);
}
