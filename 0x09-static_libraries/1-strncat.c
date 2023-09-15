#include "main.h"

/**
 * _strncat - concatenates two string.
 * @dest: string to concatenate.
 * @src: string to concatenate.
 * @n: integer to compare to.
 * Return: concatenation to @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int start = 0;
	int d_len = 0;

	while (dest[start++])
		d_len++;

	for (start = 0; src[start] && start < n; start++)
		dest[d_len++] = src[start];

	return (dest);
}
