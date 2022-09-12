#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabets excludibg q and e
 * Return: Always (0) successful
 */
int main(void)
{
	char ch;
	char hehe = "\n";

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e')
		{
			continue;
		}
		if (ch == 'q')
		{
			continue;
		}
		putchar(ch);
	}
	putchar(hehe);
	return (0);
}
