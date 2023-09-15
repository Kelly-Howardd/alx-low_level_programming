#include "main.h"

/**
 *  _strlen - Returns the lenght of a string.
 *  @s: String pointer.
 *
 *  Return: The lenght of @s
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s++)
		a++;
	return (a);
}
