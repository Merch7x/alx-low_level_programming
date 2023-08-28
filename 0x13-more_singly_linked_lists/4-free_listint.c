#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - frees a linked list allocated mem
 * @head: reference to the head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	for (tmp = head; tmp != NULL; tmp = head)
	{
		head = head->next;
		free(tmp);
	}
}
