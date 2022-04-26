#include "lists.h"

/**
 * sum_listint - function sum all the data (n) of a listint_t linked list.
 * @head: is a pointer to the first node of the list
 * Return:sum of data in linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
