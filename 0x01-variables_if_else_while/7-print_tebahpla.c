#include <stdio.h>
/**
 * main - entry point
 * Description: function that prints single  integer in reversed order
 * Return: 0 if successful
 */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
