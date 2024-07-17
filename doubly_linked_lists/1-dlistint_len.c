#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - This is a comment
 * @head: head
 *
 * Return: count
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		count = count + 1;
		head = head->next;
	}

	return (count);
}
