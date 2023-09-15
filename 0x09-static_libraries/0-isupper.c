#include "main.h"

/**
 * _isupper - Checks for Uppercase Character.
 * @c: Character to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	char alph = 'A';
	int al = 0;

	for (; alph <= 'Z'; alph++)
	{
		if (c == alph)
		{
			al = 1;
		}
	}
	return (al);
}
