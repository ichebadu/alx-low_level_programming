#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this is a struct that stores some information of a dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: struct called dog, that stores its name, its age
 * and the name of its owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
