#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - That prints a name
 *@name: name
 *@f: function
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{

	if (name && f)
	{
		f(name);
	}

}
