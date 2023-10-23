#include <string.h>

/**
 * _strchr - Locates the first occurrence of the
 *     character 'c' in the string 's'.
 * @s: The string in which to search for 'c'.
 * @c: The character to locate within the string.
 *
 * Return: A pointer to the first occurrence of 'c' in
 *    's', or NULL if 'c' is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
