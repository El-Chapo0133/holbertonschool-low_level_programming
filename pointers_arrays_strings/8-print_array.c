#include <stdio.h>
#include <unistd.h>

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	/*write(STDOUT_FILENO, "\n", 1); it doesn't work lol, i mean it does, but it doesn't validate it*/
	printf("\n");
}
