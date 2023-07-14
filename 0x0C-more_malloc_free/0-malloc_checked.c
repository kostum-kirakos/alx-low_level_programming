#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: nbr of bytes to allocate
 *
 * Return: a ptr to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

i	if (ptr == NULL)
		exit(98);

	return (ptr);
}
