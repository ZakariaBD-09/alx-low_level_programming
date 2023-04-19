#ifndef STRUCT_H_
#define STRUCT_H_

/**
 * struct dog - struct for a dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: the name of the dog owner.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
