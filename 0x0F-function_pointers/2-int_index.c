#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for integer
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare values
 * Return: -1 if no element matches
 * if size <= 0 return -1
 * @array: array of element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)

		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);
	return (-1);
}
