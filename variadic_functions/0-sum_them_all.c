#include <stdarg.h>
#include<stdio.h>

/**
* sum_them_all -entry point,returns sum
* @n: -holds value for output
* Return: (sum)
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}
	va_end(args);
	return (sum);
}
