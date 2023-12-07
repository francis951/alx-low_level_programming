#include "lists.h"
/* Function to free a doubly linked list */
void free_dlistint(dlistint_t *head) {
    dlistint_t *current = head;
    dlistint_t *next_node;

    /* Traverse the list and free each node */
    while (current != NULL) {
        next_node = current->next;
        free(current);
        current = next_node;
    }
}
