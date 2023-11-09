#include "main.h"
#include <stdio.h>


/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	if (str == NULL)
		return (NULL);
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (int i = 0; str[i] != '\0'; i++)

	{
		char c = str[i];

		int is_alpha = (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');

		if (is_alpha)

		{
			char base = (c >= 'A' && c <= 'Z') ? 'A' : 'a';

			str[i] = rot13[c - base];

		}
	}
	return (str);
}
