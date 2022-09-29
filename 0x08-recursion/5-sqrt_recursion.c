#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural root of a number
 * @n: parameter
 * Return: natural root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}

/**
 *  _sqrt_recursion - function that returns the natural root of a number
 *   @n: parameter
 *   @b: squared number
 *   Return: the square root of n
 */


