#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * is_separator - Check if a character is a word separator
 * cap_string - Capitalize all words in a string.
 *
 * @c: The character to check
 * @str: The input string
 * Return: 1 if it's a separator, 0 otherwise
 *   A pointer to the modified string
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}

char *cap_string(char *str)
{
	int capitalize = 1;
	char *p = str;

	if (str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		if (is_separator(*str))
		{
			capitalize = 1;
		}
		else if (capitalize && islower((unsigned char)*str))
		{
			*str = toupper((unsigned char)*str);
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}
		str++;
	}
	return (p);
}
