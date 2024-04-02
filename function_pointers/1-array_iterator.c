#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Iterates over an array and applies a function to each element
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to apply to each element
 *
 * Description: This function iterates over the elements of the array and applies
 *              the given action function to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
