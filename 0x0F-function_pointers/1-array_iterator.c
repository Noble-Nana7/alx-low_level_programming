#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array of integers.
 * @size: The size of the array.
 * @action: Pointer to the function to be executed
 * on each element of the array.
 *
 * Description: This function iterates over each element of the a
 *		rray and applies
 *              the given function to each element.
 *              If the array or the function
 *              pointer is NULL, the function does nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
