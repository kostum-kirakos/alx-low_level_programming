#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - return index if true, else -1
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || size <= 0 || action == NULL)
	{
		return (-1);
	}

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (action(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
