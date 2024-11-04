#include "main.h"
#include <stdio.h>

/**
* _memcpy - copies memory area
* @dest: points to destination string
* @src: char to put
* @n: numbers of time to insert the char
* Return: (s)
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
