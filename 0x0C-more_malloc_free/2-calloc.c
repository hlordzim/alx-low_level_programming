#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: function prameter for number of memery to allocate.
 * @size: size of memory to allocate.
 *
 * Return: return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		for (i = 0; i < nmemb; i++)
		{
			ptr[i] = 0;
		}
	}
	return (ptr);
}
