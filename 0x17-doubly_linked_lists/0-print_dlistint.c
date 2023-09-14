#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

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
