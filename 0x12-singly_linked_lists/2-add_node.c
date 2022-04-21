#include "lists.h"

/**
 * _strlen - function prints the length of a string
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
 * add_node - function adds a new node at the beginning of a list_t list.
 * @head: pointer to a list
 * @str: is a string
 * Return: is a pointer to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	char *s = strdup(str);

	if (s == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = s;
	new->len = _strlen(s);

	if (head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	return (new);
}
