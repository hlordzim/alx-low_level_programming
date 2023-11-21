#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum of all the data(n) of a listint_t linked list.
 * @head: pointer to the first node in the linked list
 *
 * Return: return sum of all the data(n), or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
