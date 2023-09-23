#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head node pointer.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodes = nodes + 1;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (nodes);
}
