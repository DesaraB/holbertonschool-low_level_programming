#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts_half - prints half of a string, followed by a new line.
* @str: points to a value
*/

void puts_half(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; str[i] != '\0'; i++)

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}

else
{
	for (i = (length / 2) + 1; i < length; i++)
	{
		_putchar(str[i]);
	}
}
	_putchar('\n');
}
