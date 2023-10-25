#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *node = *h;
	size_t size = 0;

	while (node != NULL)
	{
		listint_t *temp = node;

		node = node->next;
		free(temp);
		size++;
	}
	*h = NULL;
	return (size);
}
