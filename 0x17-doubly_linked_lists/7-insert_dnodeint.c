#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a new node at a given position.
 * @h: is a pointer to the base of a dlistint_t list
 * @idx: is the index to insert the node
 * @n: is an integer represent the data
 * Return: is a pointer to the inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos, size;

	dlistint_t *new, *current, *tmp;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}
	if (idx == size - 1)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	pos = 0;
	current = (*h)->next;
	tmp = *h;
	while (current != NULL && pos < (idx - 2))
	{
		pos++;
		current = current->next;
		tmp = tmp->next;
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	new->prev = current;
	current->next->prev = new;
	current->next = new;
	return (new);
}
