#ifndef DOG_H
#define DOG_H
/**
 * struct dog - function
 * @name: char
 * @age: float
 * @owner: char
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
