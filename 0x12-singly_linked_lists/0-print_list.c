#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head node pointer.
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t nodes = 0;

	if (ptr == NULL)
		return (0);

	do
	{
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		nodes++;
		ptr = ptr->next;
	}
	while (ptr != NULL);
	return (nodes);
}
