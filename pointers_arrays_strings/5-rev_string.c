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
	char *result[length];
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		result + str[i];
	}

	str = result;
}
