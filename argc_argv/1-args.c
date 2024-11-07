#include <stdio.h>

/**
* main -entry point,prints the number of arguments passed into it
* @argc: -holds value for output
* @argv: -holds value for output
* Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
