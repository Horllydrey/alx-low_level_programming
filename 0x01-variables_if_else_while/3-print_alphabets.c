#include <stdio.h>
#include <stdlib.h>
#include<time.h>
/**
 * main-entry point
 * Description: function that prints alphabet in lower and uppercase
 * Return: 0 if successful
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
