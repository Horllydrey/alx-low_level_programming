#include <stdio.h>
/**
 * main - entry point
 * Description: function that prints all the number of base 16 in lowercase
 * Return: 0 if successful
 */
int main(void)
{
	int num = '0';
	char alpha = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
