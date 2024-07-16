#include <stdio.h>

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
char *_strcpy(char *dest, char *src)
{
	int length = _strlen(src);
	int i;

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}

	return dest;
}
