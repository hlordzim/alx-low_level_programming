#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 *
 * @a: pointer to the square matrix
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("Main diagonal sum: %d\n", sum1);
	printf("Other diagonal sum: %d\n", sum2);
}
