#include <stdio.h>
/**
 * main - entry point
 * Description: finction that combines all single digits
 * Return: 0 if successful
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
