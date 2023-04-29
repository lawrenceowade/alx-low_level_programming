#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 *head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *new_str;
list_t *new_node, *current_node;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_str = strdup(str);
if (new_str == NULL)
{
free(new_node);
return (NULL);
}
new_node->str = new_str;

new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);

}

current_node = *head;
while (current_node->next != NULL)
{
current_node = current_node->next;
}

current_node->next = new_node;

return (new_node);
}
