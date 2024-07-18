#include <stdio.h>
#include <unistd.h>
/* This is a short description */

/**
 * print_array - This is a function description for people who can't read
 * @a: First parameter
 * @n: Second parameter
 *
 * Return: As you can read, it returns void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
