#include "main.h"

/**
 * _strchr - a pointer to the first occurrence
 *@s: character
 *@c: character
 *Return: 0 Successful
 */

char *_strchr(char *s, char c)
{

	int x = 0;

	for (; s[x] >= '\0'; x++)
	{

		if (s[x] == c)
		{
			return (&s[x]);
		}

	}

	return (0);

}
