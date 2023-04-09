#include "main.h"

/**
 *flip -bits - counts the number of bits to be
 *flipped to get from one number to another
 *@n:the number
 *@m:the number to flip n to 
 *Return: the number of bits to flip to get from to m
 */
unsigned in flip_bits(unsigned long int n,unsigned long int m)
{ 
	 unsigned long int xor = n ^ m, bits = 0;
	 while (xor > 0)
{	 
	bits += (xor & 1);
	xor >>= 1;
}
	return (bits);
	
}
