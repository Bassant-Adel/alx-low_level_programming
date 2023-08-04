#include "main.h"

/**
 *  _memset - Fill in part of the value memory
 *@n: The number
 *@b: Desired
 *@s: the memory address
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);

}
