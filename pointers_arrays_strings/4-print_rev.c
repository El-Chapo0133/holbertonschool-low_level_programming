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
	int i, j;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		char c = s[i];

		write(STDOUT_FILENO, "yo", 2);
		s[i] = s[j];
		write(STDOUT_FILENO, "yo", 2);
		s[j] = c;
		write(STDOUT_FILENO, "yo", 2);
	}

	write(STDOUT_FILENO, s, _strlen(s));
}
