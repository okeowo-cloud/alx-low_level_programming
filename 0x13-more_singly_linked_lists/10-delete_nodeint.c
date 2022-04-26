#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes the node at index index of a list
 * @head: is a pointer to linkedlist
 * @index: is an integer
 * Return: 1 if succesful, -1 otherwise.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;

	listint_t *next_node, *tmp;

	if (*head == NULL)
		return (-1);
	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (counter < (index - 1) && tmp != NULL)
	{
		counter++;
		tmp = tmp->next;
	}
	if (counter != (index - 1) && tmp == NULL)
		return (-1);
	next_node = tmp->next;
	tmp->next = (tmp->next)->next;
	free(next_node);
	return (1);
}
