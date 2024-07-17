#include <stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	while (head != NULL)
        {
                printf("%d", head->data);
                if (head->prev != NULL)
	                printf(", ");
                head = head->prev;
        }
        printf("\n");
}
