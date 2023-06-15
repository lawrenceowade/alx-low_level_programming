#include <stdlib.h>
#include "main.h"


/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Number of bytes to allocate.
 *
 * Return: Pointer to the allocated memory.
 *         If allocation fails, the program terminates with exit code 98.
 */

void *malloc_checked(unsigned int b)
{
void *pif;
pif = malloc(b);

if (pif == NULL)
exit(98);

return (pif);
}

