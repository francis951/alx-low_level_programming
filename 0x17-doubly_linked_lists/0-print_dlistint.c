#include <stdio.h>
#include "lists.h"

/* Function to print all elements of a doubly linked list */
size_t print_dlistint(const dlistint_t *h)
{
    size_t node_count = 0;

    /* Traverse the list and print each element */
    while (h != NULL) {
        printf("%d\n", h->n);
        h = h->next;
        node_count++;
    }

    return node_count;
}
