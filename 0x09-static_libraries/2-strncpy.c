#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int start = 0;

	while (start < n && src[start] != '\0')
	{
		dest[start] = src[start];
		start++;
	}
	while (start < n)
	{
		dest[start] = '\0';
		start++;
	}
	return (dest);
}
