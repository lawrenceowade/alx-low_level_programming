#include "lists.h"


/**
 * reverse_listint - Reverses a linked list in place.
 * @head: A pointer to the head of the linked list.
 *
 * Return: A pointer to the new head of the reversed linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

*head = prev;
return (*head);
}

