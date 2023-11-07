#include "dog.h"
#include <stddef.h>

/**
 * init_dog -  function that initialize a variable of type struct dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * @d: pointer to a struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
