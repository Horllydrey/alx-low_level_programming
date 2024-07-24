#include <stdio.h>
/**
 * main - entry point
 * Description: function that prints lower case
 * Return: 0 if successful
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if ((letter != 'q') && (letter != 'e'))
		{
				putchar(letter);
	}
	letter++;
}
putchar('\n');
return (0);
}
