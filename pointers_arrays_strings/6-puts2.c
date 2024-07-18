#include <stdio.h>
#include <unistd.h>
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
 * puts2 - This is a function description for people who can't read
 * @str: First parameter
 *
 * Return: As you can read, it returns void
 */
void puts2(char *str)
{
	int length = _strlen(str);
	int i;

	for (i = 0; i < length; i = i + 2)
	{
		char s[1];

		s[0] = str[i];
		write(STDOUT_FILENO, s, 1);
	}
	write(STDOUT_FILENO, "\n", 1);
}
