#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog_t
 */

	dog_t *new_dog(char *name, float age, char *owner)
	{
	char *dog_name = malloc(strlen(name) + 1);
	char *dog_owner = malloc(strlen(owner) + 1);

	dog_t *dog_ptr = malloc(sizeof(dog_t));

	if (dog_ptr == NULL)
		return (NULL);

	if (dog_name == NULL || dog_owner == NULL)
	{
		return (NULL);
	}

	strcpy(dog_name, name);
	strcpy(dog_owner, owner);
	dog_ptr->name = dog_name;
	dog_ptr->age = age;
	dog_ptr->owner = dog_owner;
	return (dog_ptr);
	}
