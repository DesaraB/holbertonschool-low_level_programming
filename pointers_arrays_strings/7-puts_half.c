#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts_half - prints half of a string, followed by a new line.
* @str: points to a value
*/

void puts_half(char *str)
{
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	j = (i - 1) / 2;

	for (j = (i - 1) / 2 + 1; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
}
