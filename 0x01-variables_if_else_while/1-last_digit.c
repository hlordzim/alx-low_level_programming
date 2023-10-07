#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point for main function
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
printf("Last digit of %d is %d", n, lastDigit);
	if (lastDigit > 5)
		printf(" and is greater than 5\n");
	else if (lastDigit == 0)
		printf(" and is 0\n");
	else
		printf(" and is less than 6 and not 0\n");
	return (0);
}
