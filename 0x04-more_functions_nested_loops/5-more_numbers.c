#include "main.h"

/**
 * print_more_numbers - Prints numbers from 0 to 14, ten times.
 *
 * _putchar: only three times
 */
void print_more_numbers(void)
{
	int num, i;

	for (i = 0; i < 10; i++)

	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}

			_putchar(num % 10 + '0');
		}

		_putchar('\n');
	}
}
