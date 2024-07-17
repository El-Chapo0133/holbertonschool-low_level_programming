#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

dlistint_t *add_dnodeint_end(dlistint_t **head, const int new_data)
{
	dlistint_t *new_node = (struct dlistint_s *)malloc(sizeof(struct dlistint_s));

	if (new_node == NULL)
	{
		dprintf(2, "Error, can't malloc\n");
		return (NULL);
	}

	new_node->n = new_data;
	new_node->prev = (*head);
	new_node->next = NULL;

	if ((*head) != NULL)
		(*head)->next = new_node;

	/* Change the pointer to point the new head, which is new_node */
	(*head) = new_node;
	return (new_node);
}
