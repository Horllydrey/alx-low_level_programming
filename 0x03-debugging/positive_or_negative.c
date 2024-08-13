#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative -entry point
 * Description: checks for psoitive or negative integers
 * @i: parameter
 * Return: 0 if successful
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
