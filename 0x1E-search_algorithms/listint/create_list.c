#include <stdlib.h>
#include "../search_algos.h"

/**
 * create_list - Creates a singly linked list from an array of integers.
 *
 * @array: Pointer to the array to use to fill the list.
 * @size: Size of the array.
 *
 * Return: A pointer to the head of the created list (NULL on failure).
 */
listint_t *create_list(int *array, size_t size)
{
    listint_t *list = NULL;
    listint_t *node;
    size_t i;

    if (array == NULL || size == 0)
        return NULL;

    for (i = 0; i < size; i++)
    {
        node = malloc(sizeof(*node));
        if (node == NULL)
        {
            free_list(list);
            return NULL;
        }

        node->n = array[i];
        node->index = i;
        node->next = list;
        list = node;
    }

    return list;
}
