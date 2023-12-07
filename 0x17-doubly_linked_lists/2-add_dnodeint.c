#include "lists.h"
/* Function to add a new node at the beginning of a doubly linked list */
dlistint_t *add_dnodeint(dlistint_t **head, const int n) {
    /* Allocate memory for the new node */
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        /* Allocation failed, return NULL */
        return NULL;
    }

    /* Initialize the new node */
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;

    /* Update the previous pointer of the existing head, if any */
    if (*head != NULL) {
        (*head)->prev = new_node;
    }

    /* Update the head pointer to point to the new node */
    *head = new_node;

    return new_node;
}
