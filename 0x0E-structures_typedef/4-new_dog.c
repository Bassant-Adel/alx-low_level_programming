#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - get a length of string
 *@str: The string
 *Return: Length
 */

int _strlen(const char *str)
{

	int length = 0;

	while (*str++)
	{

		length++;

	}

	return (length);
}

/**
 * _strcopy - dest with a copy of a string -> src
 *@src: String
 *@dest: Copy string
 *Return: dest
 */

char *_strcopy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b]; b++)
	{

		dest[b] = src[b];

	}

	dest[b] = '\0';
	return (dest);

}

/**
 * new_dog - creates a new dog
 *@name: Name
 *@age: Age
 *@owner: owner
 *Return: dog, (NULL)-> if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);

	}	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);

	}	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);
	return (dog);

}
