#include <stdio.h>

/**
 * main -  Entry point for the program.
 *
 * @argc_attribute_((unused): used to suppress compiler warning
 *
 * @argc: Argument count
 * @argv: argument vector to represent one of command line argument.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
