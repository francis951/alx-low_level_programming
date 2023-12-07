#include "lists.h"

/* Function to add a new node at the end of a doubly linked list */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n) {
    /* Allocate memory for the new node */
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    dlistint_t *last_node;

    if (new_node == NULL) {
        /* Allocation failed, return NULL */
        return NULL;
    }

    /* Initialize the new node */
    new_node->n = n;
    new_node->next = NULL;

    /* If the list is empty, make the new node the head */
    if (*head == NULL) {
        new_node->prev = NULL;
        *head = new_node;
        return new_node;
    }

    /* Traverse the list to find the last node */
    last_node = *head;
    while (last_node->next != NULL) {
        last_node = last_node->next;
    }

    /* Update pointers to make the new node the last node */
    last_node->next = new_node;
    new_node->prev = last_node;

    return new_node;
}
