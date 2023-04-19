#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to an array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to a function that takes an integer and returns an integer.
 *
 * Return: Index of the first element for which cmp does not return 0,
 * or -1 if no element matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

