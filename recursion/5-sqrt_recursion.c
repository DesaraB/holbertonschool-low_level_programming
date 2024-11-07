#include "main.h"

/**
* _sqrt_primaryf - function to find the root
* @n: holds a value for an output
* @r: num for multiplies
* Return: -1 for not sqr root if it is have root natural
*/

int _sqrt_primaryf(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	if (r * r > n)
	{
		return (-1);
	}
	return (_sqrt_primaryf(n, r + 1));
}
/**
* _sqrt_recursion - function for root
* @n: number to check
* Return: root of num
*/
int _sqrt_recursion(int n)
{
	return (_sqrt_primaryf(n, 0));
}
