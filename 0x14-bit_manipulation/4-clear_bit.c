#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index of the bit to set to 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
    int num_bits = 8;

    unsigned long int bit_index = sizeof(unsigned long int) * num_bits;

    if (index >= bit_index)
    {
        return (-1);
    }

    *n = (*n & ~(1UL << index));

    return (1);
}
