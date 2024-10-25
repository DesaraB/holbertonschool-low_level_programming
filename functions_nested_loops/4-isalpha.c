#include "main.h"

/**
* _isalpha - check for the alphabet
*
* @c : character to check
* Return: if c is a letter, lowercase or uppercase
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
