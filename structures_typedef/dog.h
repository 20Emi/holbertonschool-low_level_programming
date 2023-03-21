#ifndef _dog_
#define _dog_

/**
 *struct dog - params
 *@name: first element
 *@age: second element
 *@owner: third element
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*task 1*/
void init_dog(struct dog *d, char *name, float age, char *owner);
/*task 2*/
void print_dog(struct dog *d);
/*task 3*/
typedef struct dog dog_t;
/*task 4*/
dog_t *new_dog(char *name, float age, char *owne);
/*task 5*/
void free_dog(dog_t *d);

#endif
