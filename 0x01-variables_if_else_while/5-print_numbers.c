#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry point
 * Description: prints all single numbers of base 10 from 0
 * Return: Always 0 (successful)
 */
int main(void)
{
	int y;

	for (y = 0; y <= 10; y++)
	{
		putchar("%d", y);
	}
	puts('\n');
	return (0);
}
