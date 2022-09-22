#include "main.h"

/**
 * _strcat - concatenates the string pointed by @src to
 * the end of the string pointed to by @dest
 * @dest: string that will be appended
 * @src: string to be concatenates upon
 *
 * Return: returns a pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
