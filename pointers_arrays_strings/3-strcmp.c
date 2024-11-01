#include "main.h"
#include <stdio.h>

/**
* _strcmp - compares two strings
* @s1: first string to compare
* @s2: second string to compare
* Return: diff of two characters
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int difference = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			difference = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (difference);
}
