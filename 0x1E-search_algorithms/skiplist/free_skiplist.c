#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_skiplist - Deallocates a singly linked skip list.
 *
 * @list: Pointer to the head of the skip list to be freed.
 */
void free_skiplist(skiplist_t *list)
{
    skiplist_t *node;

    // Base case: If list is NULL, return
    if (list == NULL)
        return;

    // Save the next node in the list
    node = list->next;

    // Free the current node
    free(list);

    // Recursively free the rest of the list
    free_skiplist(node);
}
