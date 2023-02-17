#include<stdio.h>

/**
 * main - program entry
 *
 * Description: print combination of a single digit
 *
 * Return: 0 always
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		++digit;
	}
	putchar('\n');

	return (0);
}
