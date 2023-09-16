#include <stdio.h>

/**
 * main - prints the number of arguments passed into it,
 *		followed by a new line.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: the number of arguments passed.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
