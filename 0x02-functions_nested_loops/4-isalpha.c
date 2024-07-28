#include "main.h"
/**
 * int _isalpha - checks for uppercase alphabet
 * @c: parameter to be checked
 * Return: 1 if c is a letter, lowercase or uppercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c <= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
