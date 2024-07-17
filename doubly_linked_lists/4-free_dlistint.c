#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


void free_dlistint(dlistint_t *head)
{
	while (head != NULL) {
		Node *next = (*head)->next;
		free((*head));
		(*head) = next;
	}
}
