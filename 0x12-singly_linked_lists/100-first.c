#include "lists.h"

/**
 * pre_main - executes before the main.
 */

void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

void pre_main(void) __attribute__((constructor));
