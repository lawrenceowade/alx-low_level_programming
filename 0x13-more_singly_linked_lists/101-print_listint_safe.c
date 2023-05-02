#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the *head of the linked list
 * Return: numb of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t count = 0;

if (head == NULL)
exit(98);

slow = head;
fast = head;

while (fast != NULL && fast->next != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;

slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
slow = head;
while (slow != fast)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
slow = slow->next;
fast = fast->next;
}

printf("[%p] %d\n", (void *)slow, slow->n);
count++;
break;
}
}

while (slow != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
slow = slow->next;
}
return (count);
}



