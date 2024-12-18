#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
* @s: points to a string
* @c: char to put
* Return: (s + i)
*/

char *_strchr(char *s, char c)
{
	int i;

	if (c == '\0')
	{
		return ("");
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
