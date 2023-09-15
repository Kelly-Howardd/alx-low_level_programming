#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int start = 0;
	int d_len = 0;

	while (dest[start++])
		d_len++;

	for (start = 0; src[start]; start++)
		dest[d_len++] = src[start];

	return (dest);
}
