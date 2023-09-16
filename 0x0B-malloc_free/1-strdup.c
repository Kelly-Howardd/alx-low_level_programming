#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - pointer to a newly allocated space in memory.
 * @str: string pointer.
 *
 * Return: NULL if @str = NULL
 */

char *_strdup(char *str)
{
	char *cha;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	cha = malloc(sizeof(char) * (len + 1));

	if (cha == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		cha[i] = str[i];
	cha[len] = '\0';
	return (cha);
}
