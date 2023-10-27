#include "main.h"

/**
 * set_bit - the given index sets a bit 1
 * @n: it's nothing but a pointer to change a number
 * @index: An index that set a bit 1
 * Return: 1  success, -1 fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
        if (index > 63)
                return (-1);
        *n = ((1UL << index) | *n);
        return (1);
}
