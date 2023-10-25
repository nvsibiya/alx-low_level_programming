#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node = head;
	size_t nodes = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		nodes++;
		node = node->next;
	}
	if (nodes == 98)
	{
		fprintf(stderr, "Failure\n");
		exit(98);
	}
	return (nodes);
}
