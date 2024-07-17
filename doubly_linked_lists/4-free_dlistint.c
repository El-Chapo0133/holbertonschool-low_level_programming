#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * free_dlistint - This is a comment
 * @head: head
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
