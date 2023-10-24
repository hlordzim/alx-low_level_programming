#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * set_string - function that sets the value of a pointer to a char.
 *
 * @s: A pointer to a pointer to char.
 * @to: A pointer to the string to be set.
 */
void set_string(char **s, char *to)
{
	if (*s != NULL)
	{
		free(*s);
	}

	*s = (char *)malloc(strlen(to) + 1);
	if (*s != NULL)
	{
		strcpy(*s, to);
	}
}
