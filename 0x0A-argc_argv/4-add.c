#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers, followed by a new line.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 on success, print 'Error' and return 1 on failure.
 */

int main(int argc, char *argv[])
{
	int a, b, sum;

	sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
