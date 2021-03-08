#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog of type struct dog
 * @name: The new dog's name
 * @age: The new dog's age
 * @owner: The new dog's owner
 *
 * Return: A pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;
int pnewn, pnewo;
int pn, po;

newdog = malloc(sizeof(struct dog));
if (newdog == NULL)
return (NULL);
for (pn = 1; name[pn] != '\0'; pn++)
;
newdog->name = malloc(sizeof(char) * (pn + 1));
if (newdog->name == NULL)
{
free(newdog);
return (NULL);
}
for (po = 1; owner[po] != '\0'; po++)
;
newdog->owner = malloc((po + 1) * sizeof(char));
if (newdog->owner == NULL)
{
free(newdog->name);
free(newdog);
return (NULL);
}
newdog->age = age;
for (pnewn = 0; name[pnewn] != '\0'; pnewn++)
newdog->name[pnewn] = name[pnewn];
newdog->name[pnewn] = '\0';
for (pnewo = 0; owner[pnewo] != '\0'; pnewo++)
newdog->owner[pnewo] = owner[pnewo];
newdog->owner[pnewo] = '\0';
return (newdog);
}
