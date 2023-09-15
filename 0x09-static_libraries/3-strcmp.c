#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 *
 * Return: 0 if s1 and s2 are equals, another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int start = 0;
	int com_p = 0;

	while (com_p == 0)
	{
		if (s1[start] == '\0' && s2[start] == '\0')
			break;
		com_p = s1[start] - s2[start];
		start++;
	}
	return (com_p);
}
