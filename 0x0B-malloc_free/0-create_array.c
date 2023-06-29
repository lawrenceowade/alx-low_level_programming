#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *str;

    if (size == 0)
        return (NULL);

    str = malloc(size + 1);
    if (str == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        str[i] = c;

    str[size] = '\0';

    return (str);
}


