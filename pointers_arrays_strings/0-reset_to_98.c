#include "main.h"
#include <stdio.h>

int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}

int reset_to_98(int *n) {
	*n = 98;
	return 0;
}
