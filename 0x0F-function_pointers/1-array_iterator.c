#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *
 *@array: Array
 *@size: size
 *@action: A function
 *Return: Nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{

	int *end = array + size - 1;

	if (array && size  && action)
	{

		while (array <= end)
			action(*array++);

	}

}
