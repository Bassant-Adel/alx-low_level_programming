#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 *@argc: The number
 *@argv: An array
 *Return: 0 (Successful)
 */

int main(int argc, char *argv[])
{

	int b;

	for (b = 0; b < argc; b++)
		printf("%s\n", argv[b]);


	return (0);

}
