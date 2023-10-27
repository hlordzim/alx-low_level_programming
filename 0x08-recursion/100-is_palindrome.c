#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: The input string to check.
 * @start: The index of the starting character.
 * @end: The index of the ending character.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int is_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome(s, start + 1, end - 1));

	return (0);
}
