#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated with malloc
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes, of the new memory block
 *
 * Return: A pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_point;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_point = malloc(new_size);
		if (new_point == NULL)
			return (NULL);
		return (new_point);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_point = malloc(new_size);
	if (new_point == NULL)
		return (NULL);
	if (new_size < old_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		((char *)new_point)[i] = ((char *)ptr)[i];
	free(ptr);
	return (new_point);
}
