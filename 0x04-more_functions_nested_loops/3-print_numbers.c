#include "main"

/**
 * print_numbers - prints integer from 0 - 9
 */

void print_number(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
