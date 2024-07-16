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
void rev_string(char *str)
{
	int length = _strlen(str);
	int i, j;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		char c = str[i];

		str[i] = str[j];
		str[j] = c;
	}
}
void _puts(char *str)
{
	rev_string(str);
	write(STDOUT_FILENO, str, _strlen(str));
	write(STDOUT_FILENO, "\n", 1);
}
void print_rev(char *s)
{
	int length = _strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		write(STDOUT_FILENO, *s[i], 1);
	}
	write(STDOUT_FILENO, "\n", 1);
}
