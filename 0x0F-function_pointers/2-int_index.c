#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *@array: Array
 *@size: size
 *@cmp: compare
 *Return: Int index
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int b = 0;

	if (array && size && cmp)
	{

		while (b < size)
		{
			if (cmp(array[b]))
				return (b);
			b++;
		}

	}	return (-1);

}
