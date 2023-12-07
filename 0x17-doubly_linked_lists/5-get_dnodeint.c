#include "lists.h"
/* Function to get the nth node of a doubly linked list */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) {
    unsigned int count = 0;

    /* Traverse the list to find the nth node */
    while (head != NULL) {
        if (count == index) {
            return head;
        }

        head = head->next;
        count++;
    }

    /* If the index is out of bounds, return NULL */
    return NULL;
}
