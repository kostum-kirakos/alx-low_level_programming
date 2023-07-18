#ifndef DOG_H
#define DOG_H

struct dog
{
	char *name;
	float age;
	char *owner;
	/**
	 * Define a new type struct dog
	 * elements :name, age, owner
	 */
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
