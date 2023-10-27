#include "main.h"
#include <stdio.h>

/**
 * wildcmp - Compares two strings with wildcard support using recursion.
 *
 * @s1: The first string to compare.
 * @s2: The second string to compare with wildcard support.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}

		while (*s1)
		{
			if (wildcmp(s1, s2 + 1))
			{
				return (1);
			}
			s1++;
		}
		return (wildcmp(s1, s2 + 1));
	}
	else if (*s1 == '\0' || *s2 == '\0')
	{
		return (*s1 == *s2);
	}
	else if (*s1 == *s2 || (*s2 == '?' && *s1 != '\0'))
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
