#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free momory
 * @d: pointer to be free
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d->name);
free(d);
}
}
