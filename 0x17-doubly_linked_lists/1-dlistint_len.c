#include "lists.h"
/* Function to return the number of elements in a doubly linked list */
size_t dlistint_len(const dlistint_t *h) {
    size_t count = 0;

    /* Traverse the list and count each element */
    while (h != NULL) {
        count++;
        h = h->next;
    }

    return count;
}
