#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;
	int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		;
	i++;
	new_dog->name = malloc(i * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		new_dog->name[j] = name[j];
	}
	new_dog->age = age;
	for (i = 0; owner[i]; i++)
		;
	i++;
	new_dog->owner = malloc(i * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		new_dog->owner[j] = owner[j];
	}
	return (new_dog);
}
