#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to head of linked list
 * @str: string to be updated
 * Return: returns new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

last = *head;
while (last->next != NULL)
{
last = last->next;
}
last->next = new_node;
return (new_node);
}
