#include "main"

/**
 * print_numbers - prints integer from 0 - 9
 */
void print_number(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
