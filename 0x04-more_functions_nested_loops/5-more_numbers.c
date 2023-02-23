#include"main.c"

/**
 * more_numbers - print 0 - 14 ten times and you user _putchar
 *
 * Return 0 always
 */
void more_numbers(void)
{
	int num, row, count;


	for (row = 1; row <= 10; ++row)
	{
		for (count = 0; count <= 14; ++count)
		{
			num = count;
			if (count> )
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num +48);
		}
		_putchar('\n');
	}
}
