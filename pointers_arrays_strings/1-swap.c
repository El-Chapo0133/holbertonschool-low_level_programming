#include <stdio.h>

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = *a;
}
