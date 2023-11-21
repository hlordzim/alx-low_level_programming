#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 *  in a linked list.
 *  @h: A pointer to the head of the listint_t list
 *
 *  Return: number of nodes in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
