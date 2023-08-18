#include <stdio.h>
#include "variadic_functions.h"

/**
* format_char - Formats char
*@separator: separator
*@ap: Argument
*/


void format_char(char *separator, va_list ap)
{

	printf("%s%c", separator, va_arg(ap, int));

}

/**
* format_int - Formats int
*@separator: separator
*@ap: Argument
*/


void format_int(char *separator, va_list ap)
{

	printf("%s%d", separator, va_arg(ap, int));

}

/**
* format_float - Format the float
*@separator: separator
*@ap: Argument
*/


void format_float(char *separator, va_list ap)
{

	printf("%s%f", separator, va_arg(ap, double));

}

/**
* format_string - Format str
*@separator: separator
*@ap: Argument
*/


void format_string(char *separator, va_list ap)
{

	char *str = va_arg(ap, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";


			printf("%s%s", separator, str);

}

/**
 * print_all - prints anything
 *@format: format
 *Return: Always 0
 */


void print_all(const char * const format, ...)
{
	int x = 0, z;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format && format[x])
	{
		z = 0;

		while (tokens[z]. token)
		{
			if (format[x] == tokens[z].token[0])
			{

				tokens[z].f(separator, ap);

				separator = ", ";

			}			z++;

		}		x++;
	}
	printf("\n");
	va_end(ap);
}
