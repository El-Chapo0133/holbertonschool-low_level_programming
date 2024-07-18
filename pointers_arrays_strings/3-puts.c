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
 * _puts - This is a function description for people who can't read
 * @str: First parameter
 *
 * Return: As you can read, it returns void
 */
void _puts(char *str)
{
	write(STDOUT_FILENO, str, _strlen(str));
	write(STDOUT_FILENO, "\n", _strlen("\n"));
}
