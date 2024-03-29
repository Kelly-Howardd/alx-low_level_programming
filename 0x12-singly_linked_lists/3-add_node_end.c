#include "lists.h"

char *_strdup(const char *s);

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: The string to be added to the new node.
 * Return: The address of the new element, or NULL if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->str = _strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = 0;
	while (str[new_node->len])
		++new_node->len;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}

/**
 * _strdup - duplicates a string
 * @s: string to duplicate
 *
 * Return: pointer to new string or NULL if malloc fails
 */

char *_strdup(const char *s)
{
	size_t i = 0, len = 0;
	char *str = malloc(len + 1);

	while (s[len])
		++len;

	if (str == NULL)
		return (NULL);

	for (i = 0; i <= len; ++i)
		str[i] = s[i];

	return (str);
}
