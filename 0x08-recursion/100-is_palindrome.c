#include "main.h"


int check_pal(char *s, int x, int len);
int _strlen_recursion(char *s);


/**
 * is_palindrome -> It string is a palindrome
 *@s: A string
 *Return: (1) if it's, (0) it's not
 */

int is_palindrome(char *s)
{

	if (*s == 0)
	{
		return (1);
	}

	return (check_pal(s, 0, _strlen_recursion(s)));

}

/**
 * _strlen_recursion -> the length of a string
 *@s: A string
 *Return: The Length
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));

}

/**
 * check_pal -> characters recursively for palindrome
 *@s: It's string
 *@x: Repeated
 *@len: The length
 *Return: (1) if palindrome, (0) if not
 */

int check_pal(char *s, int x, int len)
{

	if (*(s + x) != *(s + len - 1))
	{
		return (0);
	}

	if (x >= len)
	{
		return (1);
	}

	return (check_pal(s, x + 1, len - 1));

}
