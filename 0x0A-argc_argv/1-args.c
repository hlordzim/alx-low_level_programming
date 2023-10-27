#include <stdio.h>

/**
 * main -  program that prints its name, followed by a new line
 * @argc: argument count to hold integer value
 * @argv: argument vector to represent one of command line argument
 *
 * Return: Always 0 (success)
 */
int main(int argc)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
