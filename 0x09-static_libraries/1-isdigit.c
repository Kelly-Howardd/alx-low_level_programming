#include "main.h"

/**
 * _isdigit - Checks for a digit through 0 - 9 ..
 * @c: Character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	int a;
	int b = 0;

	for (a = '0'; a <= '9'; a++)
	{
		if (c == a)
			b = 1;
	}
	return (b);
}
