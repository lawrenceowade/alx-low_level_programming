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
size_t len;
list_t *new;

if (str == NULL)
return (NULL);

len = strlen(str);

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = malloc((len + 1) * sizeof(char));
if (new->str == NULL)
{
free(new);
return (NULL);
}

strcpy(new->str, str);
new->len = len;
new->next = *head;
*head = new;

return (*head);
}
