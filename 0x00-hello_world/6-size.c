#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 for success
 */
int main(void)
{
printf("Size of char: %lu bytes\n", sizeof(char));
printf("Size of int: %lu bytes\n", sizeof(int));
printf("Size of long: %lu bytes\n", sizeof(long));
printf("Size of float: %lu bytes\n", sizeof(float));
printf("Size of double: %lu bytes\n", sizeof(double));
printf("Size of short: %lu bytes\n", sizeof(short));
printf("Size of unsigned int: %lu bytes\n", sizeof(unsigned int));
printf("Size of unsigned long: %lu bytes\n", sizeof(unsigned long));
printf("Size of long long: %lu bytes\n", sizeof(long long));
printf("Size of unsigned long long: %lu bytes\n", sizeof(unsigned long long));
printf("Size of pointer: %lu bytes\n", sizeof(void *));
return (0);
}
