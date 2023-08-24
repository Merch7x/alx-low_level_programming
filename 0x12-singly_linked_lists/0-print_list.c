#include "lists.h"
/**
 * print_list - prints the elements of a linked list
 * @h: head file of linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *current = h;

	while (current != NULL)
	{
	if (current->str != NULL && current->len != 0)
	{
	printf("[%d] %s\n", current->len, current->str);
	i++;
	}
	else
	{
	printf("[0] (nil)\n");
	i++;
	}
	current = current->next;
	}
	return (i);
}

