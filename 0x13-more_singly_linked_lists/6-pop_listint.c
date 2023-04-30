#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the value of the deleted node
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *temp;

if (*head == NULL)
return (0);

n = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);

return (n);
}
