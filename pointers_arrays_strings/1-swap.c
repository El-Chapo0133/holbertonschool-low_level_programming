#include <stdio.h>
/* This is a short description */

/**
 * swap_int - This is a function description for people who can't read
 * @a: First parameter
 * @b: Second parameter
 *
 * Return: As you can read, it returns void
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
