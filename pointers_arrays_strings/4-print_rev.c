#include "main.h"
#include <stdio.h>

/**
* print_rev - prints a string in reverse
* @s: points to the string
*/

void print_rev(char *s)
{
	int i;
	int last_index;

	for (i = 0; s[i] != '\0'; i++)
	{
		last_index = i;
	}
	if (!last_index)
		return;
	for (i = last_index; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
