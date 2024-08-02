#include "main.h"
/**
 * print_last_digit - function that prints the last number of a number
 * @n: parameter to be checked
 * Return: 0 if successful
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = -1 * (n % 10);
	}
	else
	{
		r = n % 10;
	}
	_putchar(( r % 10) + '0');
	return (r % 10);
}
