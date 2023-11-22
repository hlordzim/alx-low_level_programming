#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: A pointer to the head of the listint_t list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t node_count = 0;

	slow = fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		node_count++;
	
		slow = slow->next;
		fast = fast->next->next;
	
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
				exit(98);
		}
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (node_count);
}
