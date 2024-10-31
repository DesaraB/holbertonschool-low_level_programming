#include "main.h"
#include <stdio.h>

/**
* rev_string - reverse a string
* @s: points to the string
*/

void rev_string(char *s)
{
	int len, start, end, tmp;

	len = 0;
	while (s[len] != '\0')
		len++;

	start = 0;
	end = len - 1;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
