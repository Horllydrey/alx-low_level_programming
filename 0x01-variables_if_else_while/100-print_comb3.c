#include <stdio.h>
/**
 * main - entry point
 * Description: function that combines integers
 * Return: o if successful
 */
int main(void)
{
	int a = '0';
	int b = '0';

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{

			if (!((a == b) || (a > b)))
			{
				putchar(a);
				putchar(b);
				if (!(a == '9' && b == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
