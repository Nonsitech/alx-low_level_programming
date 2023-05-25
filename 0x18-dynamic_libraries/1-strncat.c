#include "main.h"

/**
 *_strncat - concatenates two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@src: string the be completed at end of dest
 *@n: integer parameter to compare inc to
 *Return:concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int inc = 0, dest_len = 0;

	while (dest[inc++])
	dest_len++;
	for (inc = 0; src[inc] && inc < n; inc++)
	dest[dest_len++] = src[inc];
	return (dest);
}
