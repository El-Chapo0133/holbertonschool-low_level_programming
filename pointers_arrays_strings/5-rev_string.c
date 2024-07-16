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
	char *result;
	int i;

	for (i = _strlen(str) - 1; i >= 0; i--)
	{
		result + str[i];
	}

	str = result;
}
