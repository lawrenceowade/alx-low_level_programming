#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to an array of integers
 * @size: Size of the array
 * @action: Pointer to a function that takes an integer and returns void
 *
 * Description: This function iterates over each element of the array
 * and applies the given function to it.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

    if (array == NULL ||  action == NULL) {
        for (i = 0; i < size; i++) {
            action(array[i]);
        }
    }
}
