#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_char - prints a character
* @arg: points to the variadic argument
*/

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
* print_int - prints an integer
* @arg: points to the variadic argument
*/

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
* print_float - prints a float
* @arg: points to the variadic argument
*/

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
* print_string - prints a string
* @arg: points to the variadic argument
*/

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
* print_all - function that prints everything
* @format: a list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format != NULL && (format[i] != '\0'))
	{
		j = 0;
		while (j < 4 && (format[i] != *(funcs[j].type)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
