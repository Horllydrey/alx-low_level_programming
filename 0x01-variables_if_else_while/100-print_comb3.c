#include <stdio.h>
/**
 * main - entry point
 * Description: function that combines integers
 * Return: 0 if successful
 */
int main(void)
{
	int a, b;

	for (a = '0'; a < '9'; a++)
	{
	for (b = a + 1; b <= '9'; b++)
	{
	if (b != a)
	{
	putchar(a);
putchar(b);
if (a == '8' && b == '9')
	continue;

putchar(',');
putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
