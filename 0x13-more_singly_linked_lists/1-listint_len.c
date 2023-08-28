#include "lists.h"
#include <stdio.h>
/**
 * listint_len - checks for the number of elements in a list
 * @h: head node reference
 * Return: number of elements in struct
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
