#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: Pointer to the array
 * @size: Size of the array
 * @cmp: Pointer to the comparison function
 *
 * Description: This function searches for an integer in the given array using
 *              the specified comparison function. It returns the index of the
 *              first occurrence of the integer if found, or -1 otherwise.
 *
 * Return: Index of the first occurrence of the integer if found, or -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
