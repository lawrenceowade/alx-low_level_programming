#include <stdlib.h>
#include "main.h"


/**
 * array_range - Creates an array of integers.
 * @min: Minimum range  values stored.
 * @max: Maximum range  values stored and number of elements.
 *
 * Return: Pointer to the new array.
 */

int *array_range(int min, int max)
{
int size, i;
int *pft;

if (min > max)
return (NULL);

size = max - min + 1;
pft = malloc(sizeof(int) * size);

if (pft == NULL)
return (NULL);

for (i = 0; min <= max; i++)
{
pft[i] = min;
min++;
}

return (pft);
}
