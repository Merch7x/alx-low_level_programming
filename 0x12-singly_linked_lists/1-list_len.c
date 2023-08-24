#include "lists.h"
/**
 * list_len - returns the number of elements
 * @h: head of linked list
 * Return: number of elements in a ll
*/
size_t list_len(const list_t *h)
{
const list_t *current = h;
size_t count = 0;

while (current != NULL)
{
count++;
current = current->next;
}
return (count);
}
