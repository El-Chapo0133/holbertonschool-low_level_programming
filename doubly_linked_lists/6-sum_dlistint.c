#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - This is a comment
 * @head: head
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		result = result + head->n;
		head = head->next;
	}

	return (result);
}
