#include <stdio.h>


typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *ptr;
	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		count = count + 1;
		printf("%d", ptr->n);
	}

	return count;
}
