#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of n, or -1
 *  if n has no natural square root.
 *  sqrt_helper - Helper function for calculating
 *   the square root using recursion.
 *
 * @x: The current guess for the square root.
 */
int _sqrt_recursion(int n)	
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_helper(n, 1));
}

int sqrt_helper(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, x + 1));
}
