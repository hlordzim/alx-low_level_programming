#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * @*a: Variable for function that assign the value *b
 * @*b: Variable for the temporary file temp
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
