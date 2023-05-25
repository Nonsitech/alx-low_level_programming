#include "main.h"

/**
 * _memset - fills memory with constant bytes
 * @s: address to memory block
 * @n: number of bytes to be used
 * @b: character to be used
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
{
	s[n - 1] = b;
	n = n - 1;
}
	return (s);
}
