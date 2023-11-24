#include <stdio.h>
#include "main.h"

/**
 * flip_bits - number of bits needed to flip from one number to another.
 * @n: first number
 * @m: second number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	unsigned int count = 0;

	for (a = 63; a >= 0; a--)
	{
		{
		if (((n ^ m) >> a) & 1)
			count++;
		}
	}
	return (count);
}
