#include <stdio.h>
#include <stdlib.h>

/**
 * main-entry point
 * Description: a function that prints lower case alphabet
 * Return: 0 if successful
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
