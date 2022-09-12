#include<stdio.h>
#include<unistd.h>

/**
 * main - Entry point
 * Description - prints the alphabet in lowercase and uppercase
 * Return: Always 0 (successful)
 */
int main(void)
{
	int letter;



	for (letter = 'a'; <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	for (letter = 'A'; <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
