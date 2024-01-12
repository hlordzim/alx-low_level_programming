#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 * dlistint_len - Length of a doubly linked list
 * @h: pointer to the head of the next node
 *
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
