#include"main.h"

/**
 * main - entry point
 * Description: write the fuction that prints
 * the alphabet in lowercase followed by a new line
 * Return: Always 0 (successful)
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while alphabet <= 'z';
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
