#include "lists.h"

/**
 * list_len - function returns the number of elements in a linked list_t list.
 * @h: is a pointer to list_t list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t n = 1;

	if (h == NULL)
		return (0);
	while (h)
	{
		if (h->next != NULL)
			n++;
		h = h->next;
	}
	return (n);
}
