#include <stdio.h>
/**
 * main - entry point
 * Description: program that prints all possible different combinations of three digits.
 * Return: 0 if successful
 */
int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';
	
	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if(!((a == b) || (c == b) || ( b > a) || (c > b)))
				{
					putchar(c);
					putchar(b);
					putchar(a);
					if (!(a == '9' && b == '8' && c == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
