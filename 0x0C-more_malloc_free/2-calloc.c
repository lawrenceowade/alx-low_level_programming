#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc -nallocates memory for an array and initializes it to zero
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 * Return: pointer to the allocated memory, or NULL if an error occurred
*/
void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
