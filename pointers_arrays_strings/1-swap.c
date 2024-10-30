#include "main.h"
#include <stdio.h>

/**
* swap_int - swaps the values of two integers
* @a: points to the value
* @b: points to the value
*/

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}