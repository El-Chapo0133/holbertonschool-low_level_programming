#include <stdio.h>

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
void puts2(char *str)
{
	int length = _strlen(str);
	int i;


	for (i = 0; i < length; i = i + 2)
	{
		write(STDOUT_FILENO, str[i], 1);
	}
}
