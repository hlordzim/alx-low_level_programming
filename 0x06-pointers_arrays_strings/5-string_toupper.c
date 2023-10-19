#include <ctype.h>
#include <stdio.h>

/**
 * string_toupper - Convert all lowercase letters in
 *   a string to uppercase.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		if (islower((unsigned char)str[i]))
		{
			str[i] = toupper((unsigned char)str[i]);
		}
		i++;
	}
	return (str);
}
