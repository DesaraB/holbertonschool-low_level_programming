#include "main.h"

/**
* is_prime - check is nr is prime
* @n: number to check
* @i: tester number
* Return: 1 or 0
*/

int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0)
		return (0);
	if (i > n / 2)
		return (1);
	else
		return  (is_prime(n, i + 1));
}

/**
 * is_prime_number - function to test primary function
 * @n: nr
 * Return: 1
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
