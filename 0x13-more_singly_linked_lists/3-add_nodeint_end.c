#include "lists.h"

/**
 * add_nodeint_end - function adds a new node at the end of a listint_t list.
 * @head: is a pointer to a list
 * @n: is an integer
 * Return:is a pointer to the newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last_node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last_node = *head;
	while (last_node->next)
		last_node = last_node->next;

	last_node->next = new;
	return (new);
}
