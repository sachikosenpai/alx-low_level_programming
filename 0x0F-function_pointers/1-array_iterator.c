#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator -  function that executes a function given
 * as a parameter on each element of an array.
 * @size: size of array
 * @action: pointer to the function
 * @array: array of number
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
