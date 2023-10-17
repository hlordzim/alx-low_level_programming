#include <stdio.h>

/**
 * _puts - Variable to prints the current character of string.
 *
 * @str: Represent string to be printed.
 *
 * putchar('\n'): print a new line.
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}

	putchar('\n');
}
