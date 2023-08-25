#include "lists.h"
/**
 * free_list - frees all allocated memory
 * @head: head of linked list
 * Return: nothing
*/
void free_list(list_t *head)
{
  list_t *node;

  while (head)
  {
    node = head->next;
    free(head->str);
    free(head);
    head = node;
  }
}