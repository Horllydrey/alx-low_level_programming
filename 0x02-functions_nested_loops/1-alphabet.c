#include "main.h"

/**
 * main - entry point
 * Description: print_alphabet abc
 * Return: Always 0 (successful)
 */

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
