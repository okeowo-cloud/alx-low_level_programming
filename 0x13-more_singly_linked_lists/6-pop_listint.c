#include "lists.h"

/**
 * pop_listint - function deletes the head node of a listint_t
 * @head: is a pointer to list
 * Return: is an integer
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;

	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (data);
}
