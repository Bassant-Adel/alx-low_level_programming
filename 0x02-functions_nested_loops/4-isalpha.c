#include "main.h"

/**
 * _isalpha - checks for alphabet character
 *@c: character
 *Return: (1)-> lower or uppercase, (0)-> not alphabet
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	_putchar('\n');
}
