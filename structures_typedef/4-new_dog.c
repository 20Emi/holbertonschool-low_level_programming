#include<stdlib.h>
#include "dog.h"
#include<string.h>

dog_t
*new_dog(char *name, float age, char *owner)
{
	char name1, owner1, a;

	dog_t *pi;

	pi = malloc(sizeof(dog_t));

	if (pi == NULL)
		return (NULL);

	pi->name = malloc(strlen(name) + 1);
	pi->owner = malloc(strlen(owner) + 1);

	if (pi->name == NULL)
	{
		return (NULL);
		free(pi);
	}

	if (pi->owner == NULL)
		return (NULL);

	for (a = 0; a < name1; a++)
	{
		pi->name = name;
		pi->name = '\0';
	}
	for (a = 0; a < owner1; a++)
	{
		pi->owner = owner;
		pi->owner = '\0';
	}
	pi->age = age;
	return (pi);
}
