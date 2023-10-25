#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a specified index.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if the node was successfully deleted, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	node = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
	}
	if (node == NULL || node->next == NULL)
		return (-1);
	temp = node->next;
	node->next = temp->next;
	free(temp);
	return (1);
}
