#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str1 - gets string length
 *
 * @str: the string
 *
 * Return: the length of @str
 */

int str1(const char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * strcpy - returns @dest with a copy of a string from @src
 *
 * @src: string to copy
 * @dest: copied string destination
 *
 * Return: @dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a]; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}

/**
 * new_dog - creates new dog
 *
 * @name: dog's name
 * @age: age
 * @owner: owner
 *
 * Return: struct pointer, NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (str1(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (str1(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
