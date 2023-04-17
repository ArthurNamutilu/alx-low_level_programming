#ifndef DOG_H
#define DOG_H
/**
  * struct dog - dogs info
  * @name: First member
  * @age: Second member
  * @owner: Third member
  *
  * Description: More description
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog pp;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
