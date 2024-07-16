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
void _puts(char *str)
{
	write(STDOUT_FILENO, str, _strlen(str));
	write(STDOUT_FILENO, "\n", _strlen("\n"));
}
