#include <stdio.h>
#include <math.h>
/**
 * main - main Entry point for the function
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	long num = 612852475143;
	long largest = -1;
	long factor = 2;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			largest = factor;
			while (num % factor == 0)
				num = num / factor;
		}
		factor++;
	}

	printf("%ld\n", largest);

	return (0);
}
