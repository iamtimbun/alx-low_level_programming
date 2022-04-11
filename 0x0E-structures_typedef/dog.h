#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure
 * @name: Name
 * @age: age
 * @owner: owner
 * Return: 0
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

