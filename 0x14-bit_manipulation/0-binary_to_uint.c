#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted binary number, or 0 if error or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int result;

	result = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		result <<= 1;
		if (b[a] == '1')
			result += 1;
	}
	return (result);
}
