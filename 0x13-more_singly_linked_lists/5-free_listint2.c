#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees allocated memory
 * @head: reference to head of file
 *
 * Description: frees a linked list that has the HEAD intialised to NULL
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	for (tmp = head; tmp != NULL; tmp = head)
	{
		head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}

