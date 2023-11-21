#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer to the first element in the linked list
 *
 * Return: returns the head node’s data(n), return 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
 listint_t *temp;
 int num;

 if (!head || !*head)
 return (0);

 num = (*head)->n;
 temp = (*head)->next;
 free(*head);
 *head = temp;

 return (num);
}
