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
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; head->next != NULL; i++)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
	}

	return (NULL);
}
