#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-entry point
 * Description: function that prints all aphabet except q and e
 * Return: 0 if successful
 */
int main(void)
{
	char alpha = 'a';
	while (alpha <= 'z');
{
	if((alpha =! 'e') && (alpha =! 'q'))
	{
		putchar(alpha);
	}
	alpha++;
}
putchar('\n');
return (0);
}
