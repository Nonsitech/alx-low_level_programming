#include <stdio.h>
#include"main.h"

/**
 * print_numbers - print 0 - 9
 *
 * Return: 0 always
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; ++n)
	{
		putchar(n);
	}
	putchar(10);
}
