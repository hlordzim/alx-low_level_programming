#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculate the value of the string.
 *
 * @s: The string to be measured.
 *
 * Return: Return length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
{
	length++;
	s++;
}
	return (length);
}
