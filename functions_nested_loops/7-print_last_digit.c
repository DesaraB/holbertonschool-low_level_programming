#include "main.h"

/**
* print_last_digit - check the code
* @n: number as input
* Return: value of last digit
*/

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (n >= 0)
	{
		return (last_digit);
	}
	else
	{
		return (-last_digit);
	}
}
