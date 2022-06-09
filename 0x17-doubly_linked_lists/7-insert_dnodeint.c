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
	unsigned int pos;

	dlistint_t *new, *current, *tmp;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
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
