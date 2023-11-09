#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at an index
 * @head: reference to start of list
 * @index: nth node to be returned
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}

