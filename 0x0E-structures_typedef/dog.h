#ifndef DOG_H
#define DOG_H
#include <stddef.h>

/**
 * struct dog - structure declaration for dog.
 * @name: name of a dog.
 * @age: age of a dog
 * @owner: owner of a dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
