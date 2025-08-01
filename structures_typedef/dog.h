#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure représentant un chien
 * @name: Nom du chien
 * @age: Âge du chien (en années)
 * @owner: Nom du propriétaire du chien
 *
 * Return≈©: Structure contenant les informations de base
 * sur un chien, incluant son nom, son âge et son propriétaire.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
