#include <stdio.h>
#include <stdlib.h>
#include "../search_algos.h"

/**
 * print_skiplist - Prints the content of a singly linked skip list.
 *
 * @list: Pointer to the head of the skip list.
 */
void print_skiplist(const skiplist_t *list)
{
    const skiplist_t *node;

    if (list == NULL)
    {
        printf("Empty skip list\n");
        return;
    }

    printf("List:\n");
    for (node = list; node; node = node->next)
    {
        printf("Index[%lu] = [%d]\n", node->index, node->n);
    }

    printf("\nExpress lane:\n");
    for (node = list; node; node = node->express)
    {
        printf("Index[%lu] = [%d]\n", node->index, node->n);
    }

    printf("\n");
}
