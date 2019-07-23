#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog- create a new dog
 * @name: name of the new dog
 * @age: age of new dog
 * @owner: owner of the new dog
 * Return: a pointer of type struct dog (name, age,owner)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
/* *ptr_dog is type struct dog that contain name, age, owner */
dog_t *ptr_dog;
int size_owner, size_name, i;
size_owner = 0;
size_name = 0;
while (name[size_name++])
{
}
while (owner[size_owner++])
{
}
ptr_dog = malloc(sizeof(dog_t));
if (ptr_dog == NULL)
return (NULL);
ptr_dog->name = malloc(size_name * sizeof(ptr_dog->name));
if (ptr_dog == NULL)
return (NULL);
for (i = 0; i < size_name; i++)
ptr_dog->name[i] = name[i];
ptr_dog->age = age;
ptr_dog->owner = malloc(size_owner * sizeof(ptr_dog->owner));
if (ptr_dog == NULL)
for (i = 0; i < size_owner; i++)
ptr_dog->owner[i] = owner[i];
return (ptr_dog);
}
