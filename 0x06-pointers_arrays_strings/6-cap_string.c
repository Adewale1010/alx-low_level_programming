#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: A pointer to the changed string.
 */

char *cap_string(char *n)
{
	int i = 0;

	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] = n[0] - 32;
	}
	for (i = 0; n[i] != '\0'; i++)
	{
		switch (n[i])
		{
			case ' ':
			case ',':
			case ';':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case '\n':
			case '\t':
				if (n[i + 1] > 96 && n[i + 1] < 123)
				{
					n[i + 1] = n[i + 1] - 32;
				}
		}
	}

	return (n);
}
