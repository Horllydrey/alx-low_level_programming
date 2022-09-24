#include "main.h"

/**
 * leet - Encode a string into 1337
 * @str: the string to encode
 *
 * Return: the encoded string
 */

char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform(str[i]);
		i++;
	}
	return (str);
}

/**
 * transform - helps function to map a letter with its leets encoding
 * @x: char to be encoded
 *
 * Return: the encoded char
 */

char transform(char x)
{
	char mapping_low[s] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'}
	char mapping_upper[s] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'}
	int i = 0;

	char replacement = x;

	while (i < 8)
	{
		if (x == mapping_low[i] || x == mapping_upper[i])
		{
			replacement = i + 'e'
				break;
		}
		i++;
	}
	return (replacement);
}
