#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - dlete node at an index
 * @head: reference to the head of the node
 * @index: index to remove node
 * Return: 1 0r -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp = *head;
listint_t *next = *head;
unsigned int count = 0;

if (head == NULL || *head == NULL)
{
	return (-1);
}
if (index == 0)
{
	*head = (*head)->next;
	free(tmp);
	return (1);
}
while (tmp != NULL && count < index - 1)
{
	count++;
	tmp = tmp->next;
}
if (tmp == NULL || tmp->next == NULL)
{
	return (-1);
}
next = tmp->next->next;
free(tmp->next);
tmp->next = next;

return (1);
}


