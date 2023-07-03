#include "main.h"

/**
 * _strcat - concatenates the string pointed by @src to
 * the end of the string pointed to by @dest
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int inc = 0, dest_len = 0;

	while (dest[inc++])
	dest_len++;
	for (inc = 0; src[inc]; inc++)
	dest[dest_len++] = src[inc];
	return (dest);
}
