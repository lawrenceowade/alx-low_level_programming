#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - Returns the sum of all the data n of a listint_t linked list.
 * @head: Pointer to the head node of the linked list.
 *
 * Return: The sum of all the data (n) of the linked list.
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}

