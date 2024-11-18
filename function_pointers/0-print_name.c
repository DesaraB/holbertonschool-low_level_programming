#include"function_pointers.h"
#include<stdio.h>

/**
 * print_name -entry point,prints a name
 * @name: -points to the respective value
 * @f: -points to the respective function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
