#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element on a newl
 * @array: array
 * @size: number of  element to print
 * @action: pointer to the function that performs the action
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && action)
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
