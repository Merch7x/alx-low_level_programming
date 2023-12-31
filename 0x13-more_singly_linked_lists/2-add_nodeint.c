#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Add node at the head of linked list
 * @head: double pointer to the head of the list
 * @n: member of struct to be added
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

