#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments.
 * @argc: command line args counter.
 * @argv: stores command line args.
 * Return: zero, exit_success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
