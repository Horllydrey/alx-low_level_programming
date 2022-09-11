#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - returns alphabelts
 * Return: returns (0) successful
 */
char main(void)
{
	char ch = "a";

	while (ch <= "z")
	{
		putchar(ch);
		ch++;
	}
	putchar("\n");
	return (0);
}
