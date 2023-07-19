#include "main.h"

/**
 * largest_number -> it returns the largest of 3 numbers
 *@a: first number
 *@b: second number
 *@c: third number
 *Return: largest number (successful)
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
		largest = a;

	else if (a > b && b < c)
	{
		if (a > c)
			largest = a;
		else
			largest = c;
	}

	else if (b > a && a > c)
		largest = b;

	else if (b > a && a < c)
	{
		if (b > c)
			largest = b;
		else
			largest = c;
	}

	else if (a == b && a == c)
		largest = a;

	else
	{
		if ((a == b && a > c) || (a == c && a > b) || (b == c && a > b))
			largest = a;

		else if ((a == c && a < b) || (b == c && a < b))
			largest = b;
		else
			largest = c;
	}

	return (largest);
}
