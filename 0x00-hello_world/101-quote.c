#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 for succes
 */
int main(void)
{
const char *message =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, 60);
return (1);
}
