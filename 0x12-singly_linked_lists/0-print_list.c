#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head node pointer.
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; h = h->next, nodes++)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");

	}
	return (nodes);
}
