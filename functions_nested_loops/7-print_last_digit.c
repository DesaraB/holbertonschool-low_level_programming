#include "main.h"

/**
* print_last_digit - check the code
* @n :character to check
* Return: value of last digit
*/

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (n >= 0)
	{
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else
	{
		_putchar ('0' - last_digit);
		return (-last_digit);
	}
}
