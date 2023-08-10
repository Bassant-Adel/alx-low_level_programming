#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _memset - Fill memory
 *@a: A Pointer
 *@b: A Constant
 *@c: A Max
 *Return: A pointer
 */

char *_memset(char *a, char b, unsigned int c)
{

	unsigned int i;

	for (i = 0; i < c; i++)
	{

		a[i] = b;

	}	return (a);

}

/**
 * _calloc - Allocate memory
 *@nmemb: AN Array
 *@size: A Size
 *Return: A pointer to allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *x;

	if (size == 0 || nmemb == 0)
	{

		return (NULL);

	}	x = malloc(size * nmemb);

	if (x == NULL)
	{

		return (NULL);

	}	_memset(x, 0, size * nmemb);
	return (x);

}
