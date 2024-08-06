#include "main.h"
/**
 * times_table - it prints multiplication of single integer
 * Description: a function that prints multiplication table
 * Return: void
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			prod = num * mult;

			if (mult > 0)
			{
				_putchar(' ');
				_putchar(',');
			}
			if (prod <= 9)
				_putchar(' ');
			
			_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
