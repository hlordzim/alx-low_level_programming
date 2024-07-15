#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a singly linked list
 *             using the Jump search algorithm.
 *
 * @list: pointer to the head of the linked list
 * @size: number of nodes in the list
 * @value: value to search for
 * Return: pointer to the node containing the value, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t index = 0, k = 0, m;
    listint_t *prev;

    if (list == NULL || size == 0)
        return (NULL);

    m = (size_t)sqrt((double)size);

    do {
        prev = list;
        k++;
        index = k * m;

        // Move list pointer forward within the current block
        while (list->next && list->index < index)
            list = list->next;

        // If at the end of the list, adjust the index
        if (list->next == NULL && index != list->index)
            index = list->index;

        printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

    } while (index < size && list->next && list->n < value);

    printf("Value found between indexes [%d] and [%d]\n", (int)prev->index, (int)list->index);

    // Search within the identified block
    for (; prev && prev->index <= list->index; prev = prev->next)
    {
        printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
        if (prev->n == value)
            return (prev);
    }

    return (NULL);
}
