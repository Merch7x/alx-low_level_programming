#include "lists.h"
/**
 * add_node - adds a new node to the head of a linked list
 * @head: pointer to head
 * @str: string to be added
 * Return: the address of a new node
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
int len = 0;

new_node = malloc(sizeof(list_t));

if (new_node == NULL)
{
return (NULL);
}

if (str == NULL)
{
free(new_node);
return (NULL);
}

for (; str[len]; len++)
{

}
new_node->str = strdup(str);
new_node->len = len;
new_node->next = *head;
*head = new_node;
return (new_node);
}
