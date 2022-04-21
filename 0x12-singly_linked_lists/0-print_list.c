#include "lists.h"

/**
 * print_list - function prints all the elements of a list_t list.
 * @h: is a pointer to a list_t list
 * Return: the size_t number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n_node = 0;

	const list_t *c = h;

	while (c)
	{
		if (c->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", c->len, c->str);
		n_node++;
		c = c->next;
	}
	return (n_node);
}
