#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars,
 *			and innitializes it with a specific char.
 * @c: char variable
 * @size: size of char @c
 *
 * Return: NULL if size is = 0, and pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *cha;

	if (size == 0)
		return (NULL);
	cha = malloc(sizeof(char) * size);

	if (cha == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cha[i] = c;

	return (cha);
}
