#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - Write a function that creates a new dog.
  * @name: name of dog.
  * @age: age of dog.
  * @owner: owner of dog.
  *
  * Return: Nothing
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggyy;
	int n1 = 0, o1 = 0;

	if (name != NULL && owner != NULL)
	{
		n1 = _strlen(name) + 1;
		o1 = _strlen(owner) + 1;
		doggyy = malloc(sizeof(dog_t));

		if (doggyy == NULL)
			return (NULL);

		doggyy->name = malloc(sizeof(char) * n1);

		if (doggyy->name == NULL)
		{
			free(doggyy);
			return (NULL);
		}

		doggyy->owner = malloc(sizeof(char) * o1);

		if (doggyy->owner == NULL)
		{
			free(doggyy->name);
			free(doggyy);
			return (NULL);
		}

		doggyy->name = _strcpy(doggyy->name, name);
		doggyy->owner = _strcpy(doggyy->owner, owner);
		doggyy->age = age;
	}

	return (doggyy);
}

/**
  * _strlen - Returns the length of a string
  * @s: String
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination
  * @src: Source
  *
  * Return: pointer
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
