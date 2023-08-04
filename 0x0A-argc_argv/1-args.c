#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 *@argc: The number
 *@argv: An array
 *Return: 0 (Successful)
 */

int main(int argc, char *argv[])
{

	(void) argv;

	printf("%d\n", argc - 1);

	return (0);

}
