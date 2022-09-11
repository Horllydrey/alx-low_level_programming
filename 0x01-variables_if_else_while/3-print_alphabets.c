#include<stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;
	char LETTER;

	for (letter = 'a'; <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	for (LETTER = 'A'; <= 'Z'; LETTER++)
		putchar(LETTER);

	putchar('\n');

	return (0);
}
