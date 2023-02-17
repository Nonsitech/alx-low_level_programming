#include<stdio.h>

/**
 * main - Program entry
 *
 * Description: printing alphabets in reverse
 *
 * Return: 0 always
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');

	return (0);

}
