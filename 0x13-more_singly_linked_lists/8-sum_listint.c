#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - return sum of data of nodes
 * @head: reference to head
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	if (head == NULL || tmp == NULL)
	{
		return (0);
	}

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
