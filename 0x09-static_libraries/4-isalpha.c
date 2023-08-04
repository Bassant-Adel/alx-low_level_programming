#include "main.h"

/**
 * _isalpha - alphabet character
 *@c: character
 *Return: 1 uppercase 0 if not alphabet
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);


	else
	{
		return (0);
	}

	_putchar('\n');

}
