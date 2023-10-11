#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int x, y, z;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	for (x = 0; name[x]; x++)
		;
	x++;
	new_dog->name = malloc(x * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (y = 0; owner[y]; y++)
		;
	y++;
	new_dog->owner = malloc(y * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (z = 0; z < x; z++)
		new_dog->name[z] = name[z];
	new_dog->age = age;
	for (z = 0; z < y; z++)
		new_dog->owner[z] = owner[z];
	return (new_dog);
}
