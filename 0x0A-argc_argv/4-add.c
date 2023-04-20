#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Print the result.
 * @argc: command line args counter.
 * @argv: stores command line args.
 * Return: zero, exit_success.
 */

int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

