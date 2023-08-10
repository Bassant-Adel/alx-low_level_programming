#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _isdigit - char is digit
 *@c: The char
 *Return: (1)-> digit (0)-> otherwise
 */

int _isdigit(int c)
{

	return (c >= '0' && c <= '9');

}

/**
 * _strlen - length of str
 *@s: str
 *Return: length of str
 */

int _strlen(char *s)
{

	int x = 0;

	while (*s++)
	{

		x++;

	}	return (x);

}

/**
 * big_multiply - Multiply 2 big num str
 *@s1: 1 num str
 *@s2: 2 num str
 *Return: product big num str
 */

char *big_multiply(char *s1, char *s2)
{
	char *q;
	int l1, l2, u, v, y, z;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	q = malloc(u = z = l1 + l2);

	if (!q)
		printf("Error\n"), exit(98);

	while (u--)
		q[u] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
		{
			free(q);
			printf("Error\n"), exit(98);

		}		u = s1[l1] - '0';
		y = 0;

		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(q);
				printf("Error\n"), exit(98);
			}			v = s2[l2] - '0';
			y += q[l1 + l2 + 1] + (u * v);
			q[l1 + l2 + 1] = y % 10;
			y /= 10;
		}
		if (y)
			q[l1 + l2 + 1] += y;

	}	return (q);
}

/**
 * main - Multiply 2 big num str
 *@argc: num
 *@argv: vector
 *Return: (0)-> success
 */

int main(int argc, char **argv)
{
	char *q;
	int u, y, z;

	if (argc != 3)
	{

		printf("Error\n"), exit(98);

	}	z = _strlen(argv[1]) + _strlen(argv[2]);
	q = big_multiply(argv[1], argv[2]);
	y = 0;
	u = 0;

	while (y < z)
	{
		if (q[y])
		{
			u = 1;
		}

		if (u)
		{

			_putchar(q[y] + '0');

		}		y++;
	}

	if (!u)
	{

		_putchar('0');

	}	_putchar('\n');
	free(q);
	return (0);

}
