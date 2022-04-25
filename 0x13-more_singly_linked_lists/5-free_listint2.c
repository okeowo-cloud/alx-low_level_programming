#include "lists.h"

/**
 * free_listint2 - function frees a listint_t list.
 * @head: is a pointer to a linkedlist
 * Return: is always void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *last_node;

	if (*head == NULL)
		free(head);

	last_node = *head;

	while (last_node->next)
	{
		tmp = last_node->next;
		free(last_node);
		last_node = tmp;
	}
	free(last_node);
}
