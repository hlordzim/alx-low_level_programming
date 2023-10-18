#include <stdio.h>

/**
 * puts_half - Function that prints half of a string, followed by a new line.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;

	if (str == NULL)
	{
		return;
	}

	while (str[length] != '\0')
	{
		length++;
	}

	start = (length + 1) / 2;

	for (i = start; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
