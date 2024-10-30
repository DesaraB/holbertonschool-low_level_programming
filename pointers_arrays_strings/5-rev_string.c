#include "main.h"
#include <stdio.h>

/**
* rev_string - reverse a string
* @s: points to the string
*/

void rev_string(char *s)
{
	int i;
	int last_index;
	int length = 0;
	char tmp;

	for (length = 0; s[length] != '\0'; length++)
	{
		last_index = 1;
		last_index = length - 1;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		
		last_index = length - 1;
	}

	if (!last_index)
		return;
	for (i = last_index; i >= 0; i--)
	{
		tmp = s[i];
		s[i] = s[last_index];
		s[last_index--] = tmp;
	}


}