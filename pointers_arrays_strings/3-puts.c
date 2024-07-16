#include <stdio.h>
#include <string.h>

void _puts(char *str)
{
	fwrite("Hello World", 1, strlen("Hello World"), stdout);
}
