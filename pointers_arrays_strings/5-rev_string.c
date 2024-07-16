#include <stdio.h>

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

