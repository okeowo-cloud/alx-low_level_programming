#include "lists.h"

/**
 * _strlen - function determines the length of a string
 * @s: is a pointer to string
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - function adds a new node at the end of a list_t list.
 * @head: pointer to list
 * @str: pointer to string
 * Return: pointer to new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	char *s = strdup(str);

	if (s == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = s;
	new_node->len = _strlen(s);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;
	return (new_node);
}
