#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Memory is allocated for an array and initialized with zeros.
 * @nmemb: The array's element count
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *p;

if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(nmemb * size);

if (p == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
p[i] = 0;

return (p);
}
