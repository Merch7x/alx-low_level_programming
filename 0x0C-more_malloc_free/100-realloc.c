#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - reallocates a mem block
 * @ptr: pointer to mem previously allocated with a call to malloc
 * @old_size: size of allocated space for ptr
 * @new_size: size of new mem block
 * Return: pointer to block of newly allocate memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int  new_size)
{
void *tmp_block;

if (ptr == NULL)
{
tmp_block = malloc(new_size);
if (tmp_block == NULL)
{
return (NULL);
}
return (tmp_block);
}
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else
{
if (new_size < old_size)
{
old_size = new_size;
}
tmp_block = malloc(new_size);
if (tmp_block == NULL)
{
free(ptr);
return (NULL);
}
memcpy(tmp_block, ptr, old_size);
free(ptr);
return (tmp_block);
}
}
