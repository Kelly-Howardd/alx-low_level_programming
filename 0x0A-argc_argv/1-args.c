#include <stdlib.h>
#include <stdio.h>

/**
 * main -  print a number
 * @argc: command line args counter.
 * @argv: stores command line args.
 * Return: Zero, exit_success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
