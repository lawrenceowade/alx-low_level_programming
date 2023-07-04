#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *current = head;
	const listint_t *loop_node = NULL;

	while (current != NULL)
	{
		if (current == loop_node)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}

		printf("[%p] %d\n", (void *)current, current->n);
		nodes++;

		if (current > current->next)
			loop_node = current->next;

		current = current->next;
	}

	return (nodes);
}

