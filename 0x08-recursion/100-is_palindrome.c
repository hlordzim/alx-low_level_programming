#include <stdio.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: The input string to check.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length = 0;
	int left = 0;
	int right = 0;

	if (!s || *s == '\0')
	{
		return (1);
	}

	while (s[length] != '\0')
	{
		length++;
	}
	right = length - 1;
	while (left < right)
	{
		if (s[left] != s[right])
		{
			return (0);
		}
		left++;
		right--;
	}
	return (1);
}
