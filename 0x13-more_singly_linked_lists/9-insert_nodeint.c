#include "lists.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head node of the linked list.
 * @idx: The index of the list where the new node should be added.
 * @n: The value to be assigned to the data (n) member of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *prev_node = NULL, *cur_node = *head;
unsigned int i = 0;

while (cur_node != NULL && i < idx)
{
prev_node = cur_node;
cur_node = cur_node->next;
i++;
}

if (i != idx)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (prev_node == NULL)
{
new_node->next = *head;
*head = new_node;
}
else
{
prev_node->next = new_node;
new_node->next = cur_node;
}

return (new_node);
}

