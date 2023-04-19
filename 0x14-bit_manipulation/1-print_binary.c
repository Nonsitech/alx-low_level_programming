#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
    char *str;
    int i, len = 0;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    while ((n >> len) > 0)
        len++;

    str = malloc(sizeof(char) * (len + 1));

    if (!str)
        exit(1);

    for (i = len - 1; i >= 0; i--)
    {
        if (n & 1)
            str[i] = '1';
        else
            str[i] = '0';
        n = n >> 1;
    }

    for (i = 0; i < len; i++)
        _putchar(str[i]);

    free(str);
}
