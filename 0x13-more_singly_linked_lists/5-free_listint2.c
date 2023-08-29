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
	listint_t *tmp = *head;
	listint_t *next;

	if (head == NULL)
	{
		exit(1);
	}
	else
	{
		while (tmp != NULL)
		{
			next = tmp->next;
			free(tmp);
			tmp = next;
		}
	}
	tmp = NULL;
}

