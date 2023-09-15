#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: Pointer to the string.
 *
 * Return: Prints out @str.
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
