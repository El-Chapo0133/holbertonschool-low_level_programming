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
	char *result = str;
	int i;

	for (i = 0; i < length; i++)
	{
		result[i] = str[length - i];
	}

	str = result;
}
