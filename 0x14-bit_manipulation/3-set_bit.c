#include "main.h"

/**
 * set_bit - function: sets bit in position to one (1).
 * @n:pointer: shows at the bit.
 * @index:shows the index to be set.
 *
 * Return: On success, 1 is returned
 *         Elsewhere we get -1 when on failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *number = n;
	unsigned int tag = index;

	if (number == NULL || (tag > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*number |= (1 << tag);

	return (1);
}
