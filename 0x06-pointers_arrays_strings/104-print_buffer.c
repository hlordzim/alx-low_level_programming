#include <stdio.h>

/**
 * print_buffer - Function that prints buffer.
 *
 * @b: The buffer to be printed.
 * @size: The number of bytes to print.
 *
 * Return: return and print a new line if size is 0 or less
 */
void print_buffer(char *b, int size)
{
int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{

			if (i + j < size)
			{
				printf("%02x", (unsigned char)b[i + j]);
			}
			else
			{
				printf("  ");
			}

			if (j % 2 != 0)
			{
				printf(" ");
			}
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j < size && isprint(b[i + j]))
			{
				printf("%c", b[i + j]);
			}
			else
			{
				printf(".");
			}
		}
		printf("\n");
		
	}
}
