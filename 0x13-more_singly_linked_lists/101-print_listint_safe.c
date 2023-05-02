#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list, even if it has a loop.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *tortoise, *hare;
size_t count = 0;

if (!head)
exit(98);

hare = head;
tortoise = head;

while (hare && hare->next)
{
count++;
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
tortoise = tortoise->next;
hare = hare->next->next;

if (hare == tortoise)
{
count++;
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
break;
}
}

if (!hare || !hare->next)
{
count++;
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
}

hare = head;
while (tortoise != hare)
{
count++;
printf("[%p] %d\n", (void *)hare, hare->n);
printf("ADVANCE 1\n");
hare = hare->next;

if (hare == tortoise)
{
count++;
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
break;
}

count++;
printf("[%p] %d\n", (void *)hare, hare->n);
printf("ADVANCE 1\n");
hare = hare->next;

count++;
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
printf("ADVANCE 1\n");
tortoise = tortoise->next;
}

return (count);
}

