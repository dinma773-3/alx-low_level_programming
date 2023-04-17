#ifndef DOG_H
#define DOG_H

#define dog_t "struct dog"

/**
 * struct dog - a dogs feature
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 *
 * Description: struct represents the name, age and owner of the dog
 */
typedef struct dog {
  char *name;
  float age;
  char *owner;
} dog_t;

/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
