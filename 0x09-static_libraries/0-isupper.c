#include "main.h"

/**
 * _isupper - Check if a character is uppercase.
 *
 * _isupper _program checks for uppercase character
 * @c: Variable text
 * Return: Returns 1 if 'c' is an uppercase character, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
