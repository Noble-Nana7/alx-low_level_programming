#include <stddef.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: Poimter to the array of integers.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the comparison functions.
 *
 * Return: The index of the first element for
 * which the cmp does not return 0. If no element matches,
 * return -1. If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
