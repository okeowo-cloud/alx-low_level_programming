#include "lists.h"

/**
 * free_listint - function frees a listint_t list.
 * @head: is a pointer to node
 * Return: is always void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
