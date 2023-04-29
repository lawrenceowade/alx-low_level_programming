#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *str_copy;
unsigned int len = 0;

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

str_copy = strdup(str);
if (!str_copy)
{
free(new_node);
return (NULL);
}

while (str[len])
len++;

new_node->str = str_copy;
new_node->len = len;
new_node->next = (*head);
(*head) = new_node;

return (*head);
}
