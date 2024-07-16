#include <stdio.h>

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
int _atoi(char *s)
{
	int length = _strlen(s);
	int result = 0;
	int is_negative = 0;
	int i;
	int is_recording = 0;
	int next_char_int;
	int try_char_as_int;


	if (length == 0)
		return 0;

	for (i = 0; i < length; i++)
	{
		if (s[i] == '-' && i + 1 != length)
		{
			next_char_int = s[i + 1] - '0';
			if (next_char_int >= 0 && next_char_int <= 9)
				is_negative = 1;
		}

		try_char_as_int = s[i] - '0';
		if (try_char_as_int >= 0 && try_char_as_int <= 9)
		{
			is_recording = 1;
			result = result * 10;
			result = result + try_char_as_int;
		}
		else if (is_recording == 1)
		{
			break;
		}
	}
	

	if (is_negative == 1)
		result = result - (2 * result);
	return result;
}
