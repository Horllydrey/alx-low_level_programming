#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main: Entry point
 * Decription:prints a-z
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char ch;
char hehe = "\n";

for (ch = "a"; 
		ch <= "z";
		ch ++)
{
putchar(ch);
}
putchar(hehe);
return (0);
}
