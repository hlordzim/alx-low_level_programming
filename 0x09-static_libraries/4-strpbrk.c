#include <string.h>

/**
 * _strpbrk - Searches the string 's' for the first
 * occurrence of any byte present in the string 'accept'.
 * @s: The string in which to search for the matching bytes.
 * @accept: The string containing the bytes to match in 's'.
 *
 * Return: A pointer to the first byte in 's' that matches one of the
 * bytes in 'accept', or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
	{
		if (*s == *a)
		{
			return (s);
		}
		a++;
	}
		s++;
	}
	return (NULL);
}
