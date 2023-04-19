#include "main.h"

/**
 * check_index - checks if the index is within range
 * @index: the index of the bit to set
 * Return: 1 if the index is within range, or -1 if an error occurred
 */
int check_index(unsigned int index)
{
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);
    return (1);
}

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the number to set the bit in
 * @index: the index of the bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (check_index(index) == -1)
        return (-1);

    *n = (*n | (1 << index));
    return (1);
}
