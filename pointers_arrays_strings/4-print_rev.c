#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - prints a string in reverse
* @s: points to the string
*/

void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	if (len == 0)
	{
	_putchar('\n');
	return;
	}

	for (i = len - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
