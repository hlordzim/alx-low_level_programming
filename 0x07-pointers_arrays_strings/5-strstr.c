#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates the first occurrence of the substring
 * 'needle' in the string 'haystack' while
 * ignoring the terminating null bytes.
 * @haystack: The string in which to search for the substring.
 * @needle: The substring to locate within the 'haystack'.
 *
 * Return: A pointer to the beginning of the located substring in
 * 'haystack', or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}

