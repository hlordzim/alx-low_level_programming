#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of the number. Returns -1 for negative input.
 */
int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		int result = 1;

		for (i = 1; i <= n; i++)
		{
			result *= i;
		}
		return (result);
	}
}
