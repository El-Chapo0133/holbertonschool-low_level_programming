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

	write(STDOUT_FILENO, s, _strlen(s));
	for (i = 0, j = length; i < j; i++, j--)
	{
		char c = s[i];

		s[i] = s[j];
		s[j] = c;
	}

	write(STDOUT_FILENO, s, _strlen(s));
}
