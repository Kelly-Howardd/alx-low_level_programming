#include "main.h"

/**
 * print_binary - function,prints binary_rep of a No.
 *@n: printable number.
 */

void print_binary(unsigned long int n)
{
	const unsigned long int number = n;

	if (number > 1)
		print_binary(number >> 1);

	_putchar((number & 1) + '0');
}
