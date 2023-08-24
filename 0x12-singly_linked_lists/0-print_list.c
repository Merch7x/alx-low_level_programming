#include "lists.h"
/**
 * print_list - prints the elements of a linked list
 * @h: head file of linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
	if (current->str != NULL && current->len != 0)
	{
	printf("[%d] %s\n", current->len, current->str);
	}
	else
	{
	printf("[0] (nil)\n");
	}
	count++;
	current = current->next;
	}
	return (count);
}

