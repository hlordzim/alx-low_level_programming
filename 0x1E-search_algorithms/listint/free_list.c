#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_list - Deallocates a singly linked list.
 *
 * @list: Pointer to the linked list to be freed.
 */
void free_list(listint_t *list)
{
    listint_t *node;

    // Base case: If list is NULL, return
    if (list == NULL)
        return;

    // Save the next node in the list
    node = list->next;

    // Free the current node
    free(list);

    // Recursively free the rest of the list
    free_list(node);
}
