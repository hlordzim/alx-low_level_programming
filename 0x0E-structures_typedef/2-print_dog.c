#include <stdio.h>
#include "dog.h"
#include "main.h"
#include <stddef.h>
/**
 * print_dog - function that prints a struct dog.
 *
 * @d: pointer to a struct dog variable.
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
