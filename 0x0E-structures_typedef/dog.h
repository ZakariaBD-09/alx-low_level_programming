#ifndef STRUCT_H_
#define STRUCT_H_

/**
 * struct dog - struct for a dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: the name of the dog owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
