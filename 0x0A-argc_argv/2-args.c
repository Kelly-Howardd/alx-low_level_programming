#include <stdio.h>

/**
* main - prints all arguments it received, followed by a new line.
* @argc: argument count.
* @argv: argument vector.
* Return: 0 always.
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
