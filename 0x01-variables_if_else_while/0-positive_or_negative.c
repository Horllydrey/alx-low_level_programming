#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-entry point
 * Description: checks for psoitive or negative integers
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    if (n > 0)
    {
        printf("%i is positive");
    }
    else if (n == 0)
    {
        printf("%i is equal to zero");
    }
    else if (n < 0)
    {
        printf("%i is negative");
    } 
	return (0);
}