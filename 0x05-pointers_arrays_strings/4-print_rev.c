#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 *
 * @s: The string to be printed in reverse.
 * @char *s: defines the variable types.
 *
 * putchar('\n'): Prints a new line.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	if (s == NULL)

	{
		return;
	}

	while (s[length] != '\0')

	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
