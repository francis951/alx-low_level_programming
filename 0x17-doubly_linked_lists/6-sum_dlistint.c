#include "lists.h"

/* Function to calculate the sum of all data in a doubly linked list */
int sum_dlistint(dlistint_t *head) {
    int sum = 0;

    /* Traverse the list and accumulate the sum of data */
    while (head != NULL) {
        sum += head->n;
        head = head->next;
    }

    return sum;
}
