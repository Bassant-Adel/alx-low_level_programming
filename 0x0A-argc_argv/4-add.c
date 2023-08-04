#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds positive numbers
 *@argc: number
 *@argv: array
 *Return: 0 (Successful)
 */

int main(int argc, char *argv[])
{
	int b, a, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (b = 1; b < argc; b++)
	{
		for (a = 0; argv[b][a] != '\0'; a++)
		{

			if (!isdigit(argv[b][a]))
			{
				printf("Error\n");

				return (1);

			}
		}		sum += atoi(argv[b]);
	}

	printf("%d\n", sum);
	return (0);
}
