#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index.
 * @head: Pointer to the address of the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i;

	if (!head || !(*head))
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; i < index && temp; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (!temp)
		return (-1);

	prev->next = temp->next;
	if (temp->next)
		temp->next->prev = prev;
	free(temp);
	return (1);
}
