#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - deletes head of a linked liste
 * @head: reference to head node
 * Return: 0 or 1
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	data = (*head)->n;
	*head = tmp->next;

	return (data);
}

