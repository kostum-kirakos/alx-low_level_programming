#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list.
 *
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes += 1;
	}
	return (nodes);
}
