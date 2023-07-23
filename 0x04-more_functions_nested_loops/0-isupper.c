#include "main.h"

/**
 * _isupper -> it's an uppercase letters
 *@c: char
 *Return: (0) or (1)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

