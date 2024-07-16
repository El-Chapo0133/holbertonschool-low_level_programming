#include <stdio.h>
#include <unistd.h>

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
void print_rev(char *s)
{
	int length = _strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		char c[1];

		c[0] = s[i];
		write(STDOUT_FILENO, c, 1);
	}
	write(STDOUT_FILENO, "\n", 1);
}
