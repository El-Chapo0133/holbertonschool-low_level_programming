#include <stdio>

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
void _puts(char *str)
{
	write(STDOUT_FILENO, str, _strlen(str));
	write(STDOUT_FILENO, "\n", _strlen("\n"));
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
void print_rev(char *s)
{
	_puts(rev_string(str));
}