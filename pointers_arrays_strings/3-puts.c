#include <stdio.h>
#include <string.h>

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
	fwrite(str, 1, _strlen(str), stdout);
}
