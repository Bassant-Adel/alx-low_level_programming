#include "main.h"

/**
 * _strcpy -> A function that copies the string pointed to by SRC
 *@dest: pointer
 *@src: string
 *Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
