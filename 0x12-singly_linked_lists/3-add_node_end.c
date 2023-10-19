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
	list_t *new_node, *node;
	size_t chars;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (chars = 0; str[chars]; chars++)
		;

	new_node->len = chars;
	new_node->next = NULL;
	node = *head;

	if (node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
	}

	return (*head);
}
