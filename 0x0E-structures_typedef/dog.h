#ifndef _HEADER_
#define _HEADER_

/**
  * struct dog - Dog struct
  * @name: The name of dog.
  * @age: The age of dog.
  * @owner: The owner of dog.
  *
  * Description: The attributes of a dog.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
