#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t linked list and sets the head to NULL
 * @head: pointer to a pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}

*head = NULL;
}
