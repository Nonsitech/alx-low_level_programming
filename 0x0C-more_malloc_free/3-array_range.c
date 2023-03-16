#include "main.h"
#include <stdlib.h>

/**
 * array_range -  creates an array of integers
 * @min: first integer
 * @max: second integer
 * Return: pointer to newly allocated memory or NULL if fails
 */

int *array_range(int min, int max)
{
	int i, l;
	int *array;

	if (min > max)
	return (NULL);
	l = max - min + 1;
	array = malloc(sizeof(int) * l);
	if (array == NULL)
	return (NULL);
	for (i = 0; i < l; i++, min++)
{
	array[i] = min;
}
	return (array);
}
Footer
© 2023 GitHub, Inc.
