#include <stdio.h>

/**
 * main -  program that prints its name, followed by a new line
 * @argc: argument count to hold integer value
 * @argv: argument vector to represent one of command line argument
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("mynameis %s\n", argv[0]);
	}
	return (0);
}
