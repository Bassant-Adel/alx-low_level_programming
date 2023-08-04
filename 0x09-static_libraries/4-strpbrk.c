#include "main.h"

/**
 * _strpbrk - locates the first occurrence
 *@s: string
 *@accept: string
 *Return: 0 (Successful)
 */

char *_strpbrk(char *s, char *accept)
{

	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}

		s++;
	}

	return ('\0');

}
