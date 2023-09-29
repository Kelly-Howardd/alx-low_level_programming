#include "main.h"

/**
 * get_bit - func:finds value of bit at an index.
 * @n:bit: the bit itself.
 * @index: index, all indices start at zero(0).
 *
 * Return: for if  an error occurs
 *         Elsewhre bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int number = n;
	unsigned int tag = index;

	if (tag >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((number & (1 << tag)) == 0)
		return (0);
	return (1);
}
