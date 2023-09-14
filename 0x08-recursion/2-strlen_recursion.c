#include "main.h"

/**
 * _strlen_recursion - Prints out the length of string.
 * @s: The string.
 *
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
