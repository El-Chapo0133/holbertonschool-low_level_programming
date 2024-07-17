#include <stdio.h>
#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 1;

	while (head->prev != NULL) {
		count = count + 1;
	}

	return (count);
}
