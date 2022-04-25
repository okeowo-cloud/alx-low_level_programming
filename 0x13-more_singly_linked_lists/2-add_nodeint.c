#include "lists.h"

/**
 * add_nodeint - program adds a new node at the beginning of a listint_t list.
 * @head: is a pointer to a list
 * @n: is an integer
 * Return: is a pointe to the newly added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
