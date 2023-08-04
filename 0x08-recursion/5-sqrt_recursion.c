#include "main.h"


int actual_sqrt_recursion(int n, int m);


/**
 * _sqrt_recursion -> the natural square root
 *@n: Number
 *Return: The square
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	return (actual_sqrt_recursion(n, 0));

}

/**
 * actual_sqrt_recursion -> it to find the natural square
 *@n: Number
 *@m: Repeated
 *Return: The square
 */

int actual_sqrt_recursion(int n, int m)
{

	if (m * m > n)
	{
		return (-1);
	}

	if (m * m == n)
	{
		return (m);
	}

	return (actual_sqrt_recursion(n, m + 1));

}
