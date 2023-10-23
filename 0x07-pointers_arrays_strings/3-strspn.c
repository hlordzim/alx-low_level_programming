#include <stddef.h>

/**
 * _strspn - Calculates the length of a prefix
 * substring in the string 's' consisting of bytes
 * that match characters in the 'accept' string.
 * @s: The string in which to search for the prefix substring.
 * @accept: The string containing characters to
 * match in the prefix substring.
 *
 * Return: The number of bytes in the initial segment of
 * 's' that consist only of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found = 1;
	size_t i = 0;

	while (*s && found)
	{
		found = 0;
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			{
				length++;
				found = 1;
				break;
			}
			i++;
		}
		if (found)
	{
		s++;
	}
	}
	return (length);
}
