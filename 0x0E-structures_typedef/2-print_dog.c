#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that prints struct dog (name, age, owner)
 * @d: pointer to point to the type struct dog
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
printf("Name:(nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner:(nil)\n");
else
printf("Owner: %s\n", d->name);
}
}
