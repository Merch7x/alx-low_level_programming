#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - gets nth node of a linked list
 * @head: reference to head of linked list
 * @index: index of node in linked list
 * Return: A pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (node != NULL)
	{
		if (count == index)
		{
			return (node);
		}
		count++;
		node = node->next;
	}
	return (node);
}
