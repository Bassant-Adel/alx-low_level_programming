#include "main.h"

/**
 * malloc_checked - Allocate memory
 *@b: Int
 *Return: A pointer to allocated
 */

void *malloc_checked(unsigned int b)
{

	int *a = malloc(b);

	if (a == 0)
	{

		exit(98);

	}	return (a);

}
