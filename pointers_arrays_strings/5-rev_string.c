#include <stdio.h>
/* This is a short description */

/**
 * _strlen - This is a function description for people who can't read
 * @s: First parameter
 *
 * Return: As you can read, it returns void
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * rev_string - This is a function description for people who can't read
 * @str: First parameter
 *
 * Return: As you can read, it returns void
 */
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

