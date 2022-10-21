#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Struct dog
 * @name: name
 * @age: age
<<<<<<< HEAD
 * @owner: owner
 * Description: This struct is for dog
 */

struct dog 
=======
 * @owner:  owner
 * Description: This struct is for dog
 */
struct dog
>>>>>>> b93e1e9c55528b511036c77961a0d75763e37721
{
	char *name;
	float age;
	char *owner;
};
<<<<<<< HEAD
=======

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
<<<<<<< HEAD
>>>>>>> b93e1e9c55528b511036c77961a0d75763e37721
=======
>>>>>>> 7a8b4e6927e96e65ad529f90aaeffb599c9e6307
