#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - prints array
 * @array: array
 * @size: elem of array
 * @action: pointer to print in regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	int i;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
