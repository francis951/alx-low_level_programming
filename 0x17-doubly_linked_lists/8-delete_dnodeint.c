#include "lists.h"

/* Function to delete the node at a given position in a doubly linked list */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
    unsigned int count = 0;
    dlistint_t *current, *temp;

    /* If the list is empty, or the index is out of bounds, return -1 */
    if (*head == NULL || index >= dlistint_len(*head)) {
        return -1;
    }

    /* If deleting the first node, update head and free the node */
    if (index == 0) {
        temp = *head;
        *head = temp->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(temp);
        return 1;
    }

    /* Traverse the list to find the node before the desired position */
    current = *head;
    while (current != NULL && count < index - 1) {
        current = current->next;
        count++;
    }

    /* If the desired position is not reachable, return -1 */
    if (current == NULL || current->next == NULL) {
        return -1;
    }

    /* Update pointers to delete the node at the desired position and free it */
    temp = current->next;
    current->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = current;
    }
    free(temp);

    return 1;
}

