#include "main.h"
#include <stdio.h>

/**
* _strspn - gets the length of a prefix substring
* @s: points to a string
* @accept: points to a reference string
* Return: (count)
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (count);
		}
	}
	return (count);
}
