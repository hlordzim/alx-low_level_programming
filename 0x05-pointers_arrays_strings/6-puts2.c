#include <stdio.h>

/**
 * puts2 - Function that prints every other character of a string,
 * starting with the first character.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return;
	}

	while (str[i] != '\0')
	{
		putchar(str[i]);

		i += 2;
	}

	putchar('\n');
}
