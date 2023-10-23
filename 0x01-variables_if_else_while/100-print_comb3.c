#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 8; i++)
	{
		for (i = i + 1; i <= 9; i++)
		{
			putchar('0' + i);
			putchar('0' + i);
			if (i != 8 || i != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
