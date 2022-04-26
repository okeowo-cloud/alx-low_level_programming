#include "lists.h"

/**
 * get_nodeint_at_index - function returns a node at given index
 * @head: is a pointer to the first node in a linkedlist
 * @index: is an integer
 * Return: is a pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
		if (counter == index)
			return (head);
		counter++;
		head = head->next;
	}
	return (NULL);
}
