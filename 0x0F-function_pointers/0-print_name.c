#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 *
 * @name: pointer to the name to be printed.
 * @f: function pointer that points to a function.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

