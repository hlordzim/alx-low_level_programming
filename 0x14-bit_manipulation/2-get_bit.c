#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number/value of bit at a given index.
 * @index: is the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int factor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	factor = 1 << index;
	check = n & factor;
	if (check == factor)
		return (1);
	return (0);
}
