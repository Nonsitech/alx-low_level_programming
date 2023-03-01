#include "main.h"

/**
 * _strcat - contcateens two strings but uses n from src
 *
 * @src: string to be completed at end of dest
 * @dest: string to uppend
 * @n: integer to compare  index to
 *
 * Return: new string
 */
char *_strcat(cahr *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i - 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
