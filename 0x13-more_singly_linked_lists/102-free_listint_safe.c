#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - function that frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp; 
	int next;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		next = *h - (*h)->next;
		if (next > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
