#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert node at nth node
 * @head: reference to head of linked list
 * @idx: node index
 * @n: data to be added
 * Return: address of new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *prev = *head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (prev != NULL)
	{
		if (count == idx)
		{
			new_node->n = n;
			new_node->next = prev->next;
			prev->next = new_node;
			return (new_node);
		}
		count++;
		prev = prev->next;
	}

	return (NULL);
}
