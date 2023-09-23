#include "lists.h"

/**
 * list_len - Counts all the elements of a list_t list.
 * @h: Pointer to the list.
 * Return: The number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; h = h->next, nodes++)
		continue;
	return (nodes);
}
