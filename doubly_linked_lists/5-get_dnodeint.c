#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - This is a comment
 * @head: head
 * @index: index
 *
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i;

	for (i = 0; head->prev != NULL; i++)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->prev;
	}

	return (NULL);
}
