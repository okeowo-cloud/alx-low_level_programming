#include "lists.h"

/**
 * insert_nodeint_at_index - function insert a new node at index
 * @head: is a pointer to a linkedlist
 * @idx: is an integer
 * @n: is an integer
 * Return: is a pointer to the inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;

	listint_t *insert_node, *temp;

	if (head == NULL)
		return (NULL);

	insert_node = malloc(sizeof(listint_t));

	if (insert_node == NULL)
		return (NULL);

	insert_node->n = n;

	if (idx == 0)
	{
		insert_node->next = *head;
		*head = insert_node;
		return (insert_node);
	}
	temp = *head;
	while (temp != NULL && counter < (idx - 1))
	{
		temp = temp->next;
		counter++;
		if (temp == NULL)
		{
			free(insert_node);
			return (NULL);
		}
	}
	insert_node->next = temp->next;
	temp->next = insert_node;
	return (insert_node);
}
