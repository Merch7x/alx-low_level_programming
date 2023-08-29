#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: refrence to head of ll
 * Return: a pointer to the new linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
