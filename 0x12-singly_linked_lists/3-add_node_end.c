#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->next = NULL;

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = new_node;
	}
	return (new_node);
}
