#include "main"

/**
 * _isdigit - functions that check for digit character
 * @c: the character
 * Return: 1 if c is uppercase overwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}

	return (0);
}
