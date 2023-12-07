#include "lists.h"

/* Function to insert a new node at a given position in a doubly linked list */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) {
    unsigned int count = 0;
    dlistint_t *new_node, *current;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        /* Allocation failed, return NULL */
        return NULL;
    }

    /* Initialize the new node */
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    /* If inserting at the beginning, update head and next pointer of new node */
    if (idx == 0) {
        new_node->next = *h;
        if (*h != NULL) {
            (*h)->prev = new_node;
        }
        *h = new_node;
        return new_node;
    }

    /* Traverse the list to find the node before the desired position */
    current = *h;
    while (current != NULL && count < idx - 1) {
        current = current->next;
        count++;
    }

    /* If the desired position is not reachable, free the new node and return NULL */
    if (current == NULL) {
        free(new_node);
        return NULL;
    }

    /* Update pointers to insert the new node at the desired position */
    new_node->next = current->next;
    if (current->next != NULL) {
        current->next->prev = new_node;
    }
    current->next = new_node;
    new_node->prev = current;

    return new_node;
}

