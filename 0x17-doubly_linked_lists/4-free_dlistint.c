#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: ref to start of list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
