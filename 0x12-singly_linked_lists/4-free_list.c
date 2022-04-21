#include "lists.h"

/**
 * free_list - function frees a list_t
 * @head: is a pointer to the first node
 * Return: Always void
 */
void free_list(list_t *head)
{
	list_t *tmp_node;

	while (head != NULL)
	{
		tmp_node = head->next;
		free(head->str);
		free(head);
		head = tmp_node;
	}
}
