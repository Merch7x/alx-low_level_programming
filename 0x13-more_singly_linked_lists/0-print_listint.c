#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints the nodes of a linked list
 * @h: header reference of the linked list
 * Return: size of the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
