#include "main"

/**
 * swap_int - a function that swaps the value of two integers
 * @a: An integer input pointer
 * @b: An integer input pointer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
