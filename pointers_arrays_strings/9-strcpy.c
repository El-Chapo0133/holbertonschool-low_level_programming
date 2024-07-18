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
 * _strcpy - This is a function description for people who can't read
 * @dest: First argument
 * @src: Second argument
 * 
 * Return: a single cute char
 */
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
