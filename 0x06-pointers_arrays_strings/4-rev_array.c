#include"main.h"

/**
 * reverse_arry - function that reverses the content of an int
 *
 * @a: int array pointer
 * @n: is the number of elements in swap
 *
 * Return: nothing
 *
 */
void reverse_array(int *a, int n)
{
	int temp, s, e;

	s= 0;
	e= n - 1;

	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
