#include "lists.h"

/**
 * sum_dlistint - sum data of nodes
 * @head: reference to start of list
 * Return: sum of all data in a list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	if (head == NULL)
	{
		return (0);
	}
	return (sum);
}
