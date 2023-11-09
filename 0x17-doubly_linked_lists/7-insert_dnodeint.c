#include "lists.h"

/**
 * insert_dnodeint_at_index - add node at a specified index
 * @h: reference to start of the list
 * @idx: index to insert node at
 * @n: data to add to new node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *current = *h, *new_node;

	if (h == NULL || *h == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		if (count == idx)
		{
			new_node = add_dnodeint(h, n);
			return (new_node);
		}
		count++;
		current = current->next;
	}

	new_node = add_dnodeint_end(h, n);
	return (new_node);
}


