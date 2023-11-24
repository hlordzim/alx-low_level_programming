#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function that sets the value of bit to 0 at a given index
 * @index: is the index, starting from 0 of the bit you want to set.
 * @n: pointer to the value of bit given at an index.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
