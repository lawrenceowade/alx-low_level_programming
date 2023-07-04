#include "lists.h"

/**
 * free_listint2 - frees linked list
 * @head: points to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == 0)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = 0;
}

