#include <stdio.h>
#include "dog.h"
/**
 *print_dog - print the structure of the dog
 *@d: pointer.
 *Return: Always 0.
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(nil)";
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == NULL)
d->owner = "(nil)";
printf("Owner: %s\n", d->owner);
} 
