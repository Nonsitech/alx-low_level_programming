#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits that need to be flipped to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int x = 0;

    unsigned long int e = n ^ m;

    while (e > 0)
    {
        if (e & 1)
            x++;
        e >>= 1;
    }

    return x;
}
