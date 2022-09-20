#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n element of an array of integers
 * @a: input integer
 * @n: input integer
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;
		printf(", ");
	}

	printf("\n");
}
