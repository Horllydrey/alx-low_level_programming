#include "main.h"

/**
 * main - entry point
 * print_alphabet - fuction to print abc
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
