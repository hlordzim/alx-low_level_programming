#include <stdlib.h>
#include <math.h>
#include "../search_algos.h"

/**
 * init_express - Initializes the express lane of the skip list.
 *
 * @list: Pointer to the head node of the skip list.
 * @size: Number of nodes in the skip list.
 */
void init_express(skiplist_t *list, size_t size)
{
    const size_t step = sqrt(size);
    size_t i;
    skiplist_t *save;

    for (save = list, i = 0; i < size; ++i, list = list->next)
    {
        if (i % step == 0)
        {
            save->express = list;
            save = list;
        }
    }
}

/**
 * create_skiplist - Creates a skip list from an array of integers.
 *
 * @array: Pointer to the array used to fill the skip list.
 * @size: Size of the array.
 *
 * Return: A pointer to the head of the created skip list (NULL on failure).
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
    skiplist_t *list = NULL;
    skiplist_t *node;
    size_t save_size = size;

    if (array == NULL || size == 0)
        return NULL;

    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
        {
            free_skiplist(list);
            return NULL;
        }

        node->n = array[size];
        node->index = size;
        node->express = NULL;
        node->next = list;
        list = node;
    }

    init_express(list, save_size);
    return list;
}
