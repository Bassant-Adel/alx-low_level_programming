#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array -> Creates an array of chars
 *@c: char
 *@size: siz
 *Return: Pointer to the array initialized or NULL
 */

char *create_array(unsigned int size, char c)
{

	char *b = malloc(size);

	if (size == 0 || b == 0)
		return (0);

	while (size--)
	{

		b[size] = c;

	}	return (b);

}
