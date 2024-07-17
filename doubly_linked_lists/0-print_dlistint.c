#include <stdio.h>


typedef struct dlistint_t
{
    int n;
    struct dlistint_t *prev;
    struct dlistint_t *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}

	return count;
}
