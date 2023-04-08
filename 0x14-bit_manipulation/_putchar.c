#include "main.h"
#include <unistd>

/**
 * _putchar - writes character c to the stdout
 * @c: character to print
 * Return: on success return 1
 * on errr -1 is returned and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
