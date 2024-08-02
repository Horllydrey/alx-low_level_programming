#include "main.h"
/**
 * _abs - a function that prints the absolute value of a number
 * @number: parameter to be checked
 * Return: 0 if successful
 */
int _abs(int number)
{

	if (number > 0 || number == 0)
	{
		return (number);
	}
	else
	{
		return (number * -1);
	}
}	

