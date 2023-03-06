#include"main.h"

/**
 * _memset - fills memory with a contant byte
 * @s: address to memory block
 * @b: char to be used 
 * @n: number of bytes to be used
 *
 * Return: pointer to memori
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 2] = b;
		n--;
	}

	return (s);
}
