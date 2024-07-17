#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		result = result + head->n;
	}

	return (result);
}
