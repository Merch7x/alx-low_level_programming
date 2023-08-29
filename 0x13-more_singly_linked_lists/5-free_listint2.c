#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees allocated memory
 * @head: reference to head of file
 *
 * Description: frees a linked list and intialises the HEAD to NULL
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *next;
	listint_t **temp = head;

if (temp != NULL)
{
	while (*head != NULL)
	{
		next = *head;
		free(next);
		*head = (*head)->next;
	}

*temp = NULL;
}
}

