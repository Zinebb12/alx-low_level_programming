#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *sweet_dog;
	char *sweet_name, *sweet_owner;

	sweet_dog = (dog_t *)malloc(sizeof(dog_t));
	if (!sweet_dog)
		return (NULL);

	sweet_name = (char *) malloc(sizeof(sweet_dog->name) * (strlen(name) + 1));
	sweet_owner = (char *) malloc(sizeof(sweet_dog->name) * (strlen(owner) + 1));

	if (!sweet_name || !sweet_owner)
	{

		free(sweet_dog);
		free(sweet_name);
		free(sweet_owner);
		return (NULL);
	}

	strcpy(sweet_owner, owner);
	strcpy(sweet_name, name);

	sweetdog->name = sweet_name;
	sweet_dog->owner = sweet_owner;
	sweet_dog->age = age;

	return (sweet_dog);
}
